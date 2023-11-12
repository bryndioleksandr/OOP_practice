#include "createdoc.h"
#include "ui_createdoc.h"

CreateDoc::CreateDoc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateDoc)
{
    ui->setupUi(this);
}

CreateDoc::~CreateDoc()
{
    delete ui;
}

bool CreateDoc::checkFields(){
    bool check = false;
    if(ui->idLn->text().isEmpty() || ui->surnameLn->text().isEmpty() || ui->firstNameLn->text().isEmpty() || ui->lastNameLn->text().isEmpty() || ui->addressLn->text().isEmpty() ||ui->phoneNumLn->text().isEmpty() || ui->specializationLn->text().isEmpty()){
        check = false;
    }
    else check = true;
    return check;
}

void CreateDoc::on_confirmDocPb_clicked()
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    id = ui->idLn->text();
    surname = ui->surnameLn->text();
    firstName = ui->firstNameLn->text();
    lastName = ui->lastNameLn->text();
    address = ui->addressLn->text();
    phoneNumber = ui->phoneNumLn->text();
    specialization = ui->specializationLn->text();
    try{
    if (checkFields()) {
    Doctor doc;
    doc.setId(id.toInt());
    doc.setSurname(surname.toStdString());
    doc.setFirstName(firstName.toStdString());
    doc.setLastName(lastName.toStdString());
    doc.setAddress(address.toStdString());
    doc.setPhoneNumber(phoneNumber.toStdString());
    doc.setSpecialization(specialization.toStdString());

    if (db->insertIntoTableDoctor(doc)) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::information(this, "Created successful!", "Now object is created and data is saved in the database! Close this window to look out the printed data.", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            accept();
        }
    } else {
        QMessageBox::warning(this, "Error due to database operation :(", "Data couldn't be saved in the database!");
    }
    }
 else {
    QMessageBox::warning(this, "Error due to input data :(", "Some fields are empty, please fill them all!!!");
    throw std::runtime_error("Error in inputing data:(");
    }
    }catch(const std::exception &ex){
    qWarning() << "Exception in inputing data: " << ex.what();
    }
}





