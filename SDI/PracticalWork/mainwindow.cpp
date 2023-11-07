#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QVBoxLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->formWidget->hide();
    ui->label_2->hide();
    ui->pbConfirm->hide();

    QFont font;
    font.setFamily("Bahnschrift Light SemiCondensed");
    font.setPointSize(22);
    label_3 = new QLabel;
    label_3->setFont(font);
    label_3->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->verticalLayout_3->addWidget(label_3);

    connect(ui->pbCreate, SIGNAL(clicked()), this, SLOT(on_pbCreate_clicked()));
    connect(ui->pbConfirm, SIGNAL(clicked()), this, SLOT(on_pbConfirm_clicked()));
    connect(ui->pbShow, SIGNAL(clicked()), this, SLOT(on_pbShow_clicked()));
    connect(ui->pbExit, SIGNAL(clicked()), this, SLOT(on_pbExit_clicked()));
    connect(ui->actionCreate, SIGNAL(triggered()), this, SLOT(on_actionCreate_triggered()));
    connect(ui->actionPrint, SIGNAL(triggered()), this, SLOT(on_actionPrint_triggered()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(on_actionExit_triggered()));

}


MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::checkFields(){
    bool check = false;
    if(ui->idLn->text().isEmpty() || ui->surnameLn->text().isEmpty() || ui->firstNameLn->text().isEmpty() || ui->lastNameLn->text().isEmpty() || ui->addressLn->text().isEmpty() || ui->phoneNumLn->text().isEmpty() || ui->medNumLn->text().isEmpty() || ui->diagnosisLn->text().isEmpty()){
        check = false;
    }
    else check = true;
    return check;
}


void MainWindow::on_pbCreate_clicked()
{
    ui->idLn->setText("");
    ui->firstNameLn->setText("");
    ui->surnameLn->setText("");
    ui->lastNameLn->setText("");
    ui->addressLn->setText("");
    ui->phoneNumLn->setText("");
    ui->medNumLn->setText("");
    ui->diagnosisLn->setText("");
    label_3->hide();
    ui->formWidget_2->hide();
    ui->formWidget->show();
    ui->label_2->show();
    ui->pbConfirm->show();
     id = ui->idLn->text();
     firstName = ui->firstNameLn->text();
     surname = ui->surnameLn->text();
     lastName = ui->lastNameLn->text();
     address = ui->addressLn->text();
     phoneNumber = ui->phoneNumLn->text();
     medicalNumber = ui->medNumLn->text();
     diagnosis = ui->diagnosisLn->text();

}

void MainWindow::on_pbConfirm_clicked()
{
        if(checkFields())patient = new Patient(id.toInt(), firstName.toStdString(), surname.toStdString(), lastName.toStdString(), address.toStdString(), phoneNumber.toStdString(), medicalNumber.toStdString(), diagnosis.toStdString());
        else QMessageBox::warning(this, "Error due inputing data :(", "Some fields are empty, please fill them all!!!");
}

void MainWindow::on_pbShow_clicked()
{
    if(!checkFields())QMessageBox::warning(this, "Error due inputing data :(", "Some fields are empty, please fill them all!!!");
    else{
        for (auto label : ui->formWidget_2->findChildren<QLabel *>()) {
            label->hide();
        }

        ui->pbConfirm->hide();
        ui->formWidget->hide();
        ui->label_2->hide();

        ui->formWidget_2->resize(371, 391);
        ui->formWidget_2->move(410, 90);
        ui->formWidget_2->show();
        label_3->show();

        QFont font;
        font.setFamily("Bahnschrift Light SemiCondensed");
        font.setPointSize(16);

        label_3->setText("Data about created object:");

        QLabel *opId = new QLabel;
        opId->setText("ID: " + ui->idLn->text());
        opId->setParent(ui->formWidget_2);
        opId->setGeometry(1, 1, 300, 24);
        opId->setVisible(true);
        opId->setFont(font);

        QLabel *opFirstName = new QLabel;
        opFirstName->setText("First name: " + ui->firstNameLn->text());
        opFirstName->setParent(ui->formWidget_2);
        opFirstName->setGeometry(1, 41, 300, 24);
        opFirstName->setVisible(true);
        opFirstName->setFont(font);

        QLabel *opSurname = new QLabel;
        opSurname->setText("Surname: " + ui->surnameLn->text());
        opSurname->setParent(ui->formWidget_2);
        opSurname->setGeometry(1, 81, 300, 24);
        opSurname->setVisible(true);
        opSurname->setFont(font);

        QLabel *opLastName = new QLabel;
        opLastName->setText("Last name: " + ui->lastNameLn->text());
        opLastName->setParent(ui->formWidget_2);
        opLastName->setGeometry(1, 121, 300, 24);
        opLastName->setVisible(true);
        opLastName->setFont(font);

        QLabel *opAddress = new QLabel;
        opAddress->setText("Address: " +ui->addressLn->text());
        opAddress->setParent(ui->formWidget_2);
        opAddress->setGeometry(1, 161, 300, 24);
        opAddress->setVisible(true);
        opAddress->setFont(font);

        QLabel *opPhoneNum = new QLabel;
        opPhoneNum->setText("Phone number: " + ui->phoneNumLn->text());
        opPhoneNum->setParent(ui->formWidget_2);
        opPhoneNum->setGeometry(1, 201, 300, 24);
        opPhoneNum->setVisible(true);
        opPhoneNum->setFont(font);

        QLabel *opMedNum = new QLabel;
        opMedNum->setText("Medical number: " + ui->medNumLn->text());
        opMedNum->setParent(ui->formWidget_2);
        opMedNum->setGeometry(1, 241, 300, 24);
        opMedNum->setVisible(true);
        opMedNum->setFont(font);

        QLabel *opDiagnosis = new QLabel;
        opDiagnosis->setText("Diagnosis: " +ui->diagnosisLn->text());
        opDiagnosis->setParent(ui->formWidget_2);
        opDiagnosis->setGeometry(1, 281, 300, 24);
        opDiagnosis->setVisible(true);
        opDiagnosis->setFont(font);

    }
}


void MainWindow::on_pbExit_clicked()
{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Exiting the program", "Are you sure you want to exit?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QCoreApplication::exit(0); // Exit the application with return code 0
        }
}

void MainWindow::on_actionCreate_triggered()
{
        MainWindow::on_pbCreate_clicked();
        MainWindow::on_pbConfirm_clicked();

}


void MainWindow::on_actionPrint_triggered()
{
        MainWindow::on_pbShow_clicked();
}




void MainWindow::on_actionExit_triggered()
{
        MainWindow::on_pbExit_clicked();
}







