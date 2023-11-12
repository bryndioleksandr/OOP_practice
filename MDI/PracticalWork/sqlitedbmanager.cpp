#include "sqlitedbmanager.h"

#include <QObject>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager(){
}

SqliteDBManager* SqliteDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new SqliteDBManager();
    }
    return instance;
}

void SqliteDBManager::connectToDataBase()
{
    try {
        if (QFile(DATABASE_NAME).exists()) {
            if (!this->openDataBase()) {
                throw std::runtime_error("Failed to open the database");
            }
        } else {
            if (!this->restoreDataBase()) {
                throw std::runtime_error("Failed to restore the database");
            }
        }
    } catch (const std::exception& ex) {
        qCritical() << "Exception in connectToDataBase: " << ex.what();
    }
}

QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

// Метод відновлення бази даних
bool SqliteDBManager::restoreDataBase()
{
    try {
        if (this->openDataBase()) {
            if (!this->createTables()) {
                return false;
            } else {
                return true;
            }
        } else {
            throw std::runtime_error("Failed to restore the database");
        }
    } catch (const std::exception& ex) {
        qCritical() << "Exception in restoreDataBase: " << ex.what();
        return false;
    }
}

bool SqliteDBManager::openDataBase()
{
    try {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setHostName(DATABASE_HOSTNAME);
        db.setDatabaseName(DATABASE_NAME);

        if (db.open()) {
            return true;
        } else {
            throw std::runtime_error("Failed to open database");
        }
    } catch (const std::exception &ex) {
        qCritical() << "Exception in openDataBase: " << ex.what();
        return false;
    } catch (const QSqlError &sqlError) {
        qCritical() << "SQL Error in openDataBase: " << sqlError.text();
        return false;
    }
}

void SqliteDBManager::closeDataBase()
{
    db.close();
}

bool SqliteDBManager::createTables()
{
    try{
    QSqlQuery query;
    bool success = true;
    if(!query.exec( "CREATE TABLE " TABLE_PATIENTS"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_SURNAME " TEXT NOT NULL,"
                    TABLE_FIRST_NAME " TEXT NOT NULL,"
                    TABLE_LAST_NAME " TEXT NOT NULL,"
                    TABLE_ADDRESS " TEXT NOT NULL,"
                    TABLE_PHONENUM " TEXT NOT NULL,"
                    TABLE_MEDNUM " TEXT NOT NULL,"
                    TABLE_DIAGNOSIS " TEXT NOT NULL"
                    " )"
                    )){
        throw std::runtime_error("Error creating Patients table");
        success = false;
    }
    if(!query.exec( "CREATE TABLE " TABLE_DOCTORS"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_SURNAME " TEXT NOT NULL,"
                    TABLE_FIRST_NAME " TEXT NOT NULL,"
                    TABLE_LAST_NAME " TEXT NOT NULL,"
                    TABLE_ADDRESS " TEXT NOT NULL,"
                    TABLE_PHONENUM " TEXT NOT NULL,"
                    TABLE_SPECIALIZATION " TEXT NOT NULL"
                    " )"
                    )){
        throw std::runtime_error("Error creating Doctors table");
        success = false;
    }
        return success;
    } catch (const std::exception &ex) {
        qCritical() << "Exception in createTables: " << ex.what();
        return false;
    }
}

bool SqliteDBManager::insertIntoTablePatient(Patient& pat)
{
    QSqlQuery query;
    try{
        qInfo() << TABLE_PATIENTS<<" table is created\n";
        query.prepare("INSERT INTO " TABLE_PATIENTS " ("
                      TABLE_ID ", "
                      TABLE_SURNAME ", "
                      TABLE_FIRST_NAME ", "
                      TABLE_LAST_NAME ", "
                      TABLE_ADDRESS ", "
                      TABLE_PHONENUM ", "
                      TABLE_MEDNUM ", "
                      TABLE_DIAGNOSIS ") "
                      "VALUES(:ID, :surname, :firstName, :lastName, :address, :phoneNumber, :medicalNumber, :diagnosis)");
        query.bindValue(":ID", pat.getId());
        query.bindValue(":surname", QString::fromStdString(pat.getSurname()));
        query.bindValue(":firstName", QString::fromStdString(pat.getFirstName()));
        query.bindValue(":lastName", QString::fromStdString(pat.getLastName()));
        query.bindValue(":address", QString::fromStdString(pat.getAddress()));
        query.bindValue(":phoneNumber", QString::fromStdString(pat.getPhoneNumber()));
        query.bindValue(":medicalNumber", QString::fromStdString(pat.getMedicalNumber()));
        query.bindValue(":diagnosis", QString::fromStdString(pat.getDiagnosis()));

        if (!query.exec()) {
        throw std::runtime_error("Error inserting into Patients table");
        } else
        return true; } catch (const std::exception &ex) {
        qCritical() << "Exception in SqliteDBManager::insertIntoTablePatient: " << ex.what();
        return false;
}

}

bool SqliteDBManager::insertIntoTableDoctor(Doctor& doc)
{
try{
    QSqlQuery query;
                qInfo() << TABLE_DOCTORS<<" table is created";
                query.prepare("INSERT INTO " TABLE_DOCTORS " ( "
                              TABLE_ID ", "
                              TABLE_SURNAME ", "
                              TABLE_FIRST_NAME ", "
                              TABLE_LAST_NAME ", "
                              TABLE_ADDRESS ", "
                              TABLE_PHONENUM ", "
                              TABLE_SPECIALIZATION ") "
                              "VALUES (:ID, :surname, :firstName, :lastName, :address, :phoneNumber, :specialization)");

    query.bindValue(":ID", doc.getId());
    query.bindValue(":surname", QString::fromStdString(doc.getSurname()));
    query.bindValue(":firstName", QString::fromStdString(doc.getFirstName()));
    query.bindValue(":lastName", QString::fromStdString(doc.getLastName()));
    query.bindValue(":address", QString::fromStdString(doc.getAddress()));
    query.bindValue(":phoneNumber", QString::fromStdString(doc.getPhoneNumber()));
    query.bindValue(":specialization", QString::fromStdString(doc.getSpecialization()));

        if (!query.exec()) {
        throw std::runtime_error("Error inserting into Doctors table");
    } else return true;
    }catch (const std::exception &ex) {
    qCritical() << "Exception in SqliteDBManager::insertIntoTableDoctor: " << ex.what();
    return false;
    }
}

bool SqliteDBManager::clearPatientsTable() {
    try {
    QSqlQuery query;

    if (query.exec("DELETE FROM " TABLE_PATIENTS)) {
        return true;
    } else {
        throw std::runtime_error("Error clearing Patients table");
    }
    } catch (const QSqlError &sqlError) {
    qCritical() << "SQL Error in clearDoctorsTable: " << sqlError.text();
    return false;
    } catch (const std::exception &ex) {
    qCritical() << "Exception in SqliteDBManager::clearPatientsTable: " << ex.what();
    return false;
    }
}

bool SqliteDBManager::clearDoctorsTable() {
    try {
        QSqlQuery query;

        if (query.exec("DELETE FROM " TABLE_DOCTORS)) {
        return true;
        } else {
        throw std::runtime_error("Error clearing Doctors table");
        }
    }catch (const QSqlError &sqlError) {
        qCritical() << "SQL Error in clearDoctorsTable: " << sqlError.text();
        return false;
    }catch (const std::exception &ex) {
        qCritical() << "Exception in SqliteDBManager::clearDoctorsTable: " << ex.what();
        return false;
    }
}
