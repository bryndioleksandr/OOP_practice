#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "Patient.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_actionCreate_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_pbCreate_clicked();

    void on_pbShow_clicked();

    void on_pbExit_clicked();

    void on_pbConfirm_clicked();

private:
    Ui::MainWindow *ui;
    Patient *patient;
    bool checkFields();
    QLabel *label_3;
    QString id, firstName, surname, lastName, address, phoneNumber, medicalNumber, diagnosis;
};
#endif // MAINWINDOW_H
