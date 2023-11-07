/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate;
    QAction *actionPrint;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbCreate;
    QPushButton *pbShow;
    QPushButton *pbExit;
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *idLb;
    QLineEdit *idLn;
    QLabel *surnameLb;
    QLineEdit *surnameLn;
    QLabel *firstNameLb;
    QLineEdit *firstNameLn;
    QLabel *lastNameILb;
    QLineEdit *lastNameLn;
    QLabel *addressLb;
    QLineEdit *addressLn;
    QLabel *phoneNumberLb;
    QLineEdit *phoneNumLn;
    QLabel *medNumLb;
    QLineEdit *medNumLn;
    QLabel *diagnosisLb;
    QLineEdit *diagnosisLn;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QWidget *formWidget_2;
    QFormLayout *formLayout_6;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pbConfirm;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{rgb(170, 44, 33);}\n"
""));
        actionCreate = new QAction(MainWindow);
        actionCreate->setObjectName("actionCreate");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/1445149.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate->setIcon(icon);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/72647.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/123.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 10, 347, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(40, 170, 281, 241));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pbCreate = new QPushButton(verticalLayoutWidget_2);
        pbCreate->setObjectName("pbCreate");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiLight Condensed")});
        font1.setPointSize(22);
        pbCreate->setFont(font1);
        pbCreate->setCheckable(false);

        verticalLayout_2->addWidget(pbCreate);

        pbShow = new QPushButton(verticalLayoutWidget_2);
        pbShow->setObjectName("pbShow");
        pbShow->setFont(font1);

        verticalLayout_2->addWidget(pbShow);

        pbExit = new QPushButton(verticalLayoutWidget_2);
        pbExit->setObjectName("pbExit");
        pbExit->setFont(font1);

        verticalLayout_2->addWidget(pbExit);

        formWidget = new QWidget(centralwidget);
        formWidget->setObjectName("formWidget");
        formWidget->setGeometry(QRect(410, 90, 371, 341));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(20);
        idLb = new QLabel(formWidget);
        idLb->setObjectName("idLb");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift Light SemiCondensed")});
        font2.setPointSize(14);
        idLb->setFont(font2);
        idLb->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, idLb);

        idLn = new QLineEdit(formWidget);
        idLn->setObjectName("idLn");

        formLayout->setWidget(0, QFormLayout::FieldRole, idLn);

        surnameLb = new QLabel(formWidget);
        surnameLb->setObjectName("surnameLb");
        surnameLb->setFont(font2);
        surnameLb->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, surnameLb);

        surnameLn = new QLineEdit(formWidget);
        surnameLn->setObjectName("surnameLn");

        formLayout->setWidget(1, QFormLayout::FieldRole, surnameLn);

        firstNameLb = new QLabel(formWidget);
        firstNameLb->setObjectName("firstNameLb");
        firstNameLb->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, firstNameLb);

        firstNameLn = new QLineEdit(formWidget);
        firstNameLn->setObjectName("firstNameLn");

        formLayout->setWidget(2, QFormLayout::FieldRole, firstNameLn);

        lastNameILb = new QLabel(formWidget);
        lastNameILb->setObjectName("lastNameILb");
        lastNameILb->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, lastNameILb);

        lastNameLn = new QLineEdit(formWidget);
        lastNameLn->setObjectName("lastNameLn");

        formLayout->setWidget(3, QFormLayout::FieldRole, lastNameLn);

        addressLb = new QLabel(formWidget);
        addressLb->setObjectName("addressLb");
        addressLb->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, addressLb);

        addressLn = new QLineEdit(formWidget);
        addressLn->setObjectName("addressLn");

        formLayout->setWidget(4, QFormLayout::FieldRole, addressLn);

        phoneNumberLb = new QLabel(formWidget);
        phoneNumberLb->setObjectName("phoneNumberLb");
        phoneNumberLb->setFont(font2);

        formLayout->setWidget(5, QFormLayout::LabelRole, phoneNumberLb);

        phoneNumLn = new QLineEdit(formWidget);
        phoneNumLn->setObjectName("phoneNumLn");

        formLayout->setWidget(5, QFormLayout::FieldRole, phoneNumLn);

        medNumLb = new QLabel(formWidget);
        medNumLb->setObjectName("medNumLb");
        medNumLb->setFont(font2);

        formLayout->setWidget(6, QFormLayout::LabelRole, medNumLb);

        medNumLn = new QLineEdit(formWidget);
        medNumLn->setObjectName("medNumLn");

        formLayout->setWidget(6, QFormLayout::FieldRole, medNumLn);

        diagnosisLb = new QLabel(formWidget);
        diagnosisLb->setObjectName("diagnosisLb");
        diagnosisLb->setFont(font2);

        formLayout->setWidget(7, QFormLayout::LabelRole, diagnosisLb);

        diagnosisLn = new QLineEdit(formWidget);
        diagnosisLn->setObjectName("diagnosisLn");

        formLayout->setWidget(7, QFormLayout::FieldRole, diagnosisLn);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(430, 10, 321, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        formWidget_2 = new QWidget(centralwidget);
        formWidget_2->setObjectName("formWidget_2");
        formWidget_2->setGeometry(QRect(0, 540, 16, 16));
        formLayout_6 = new QFormLayout(formWidget_2);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setVerticalSpacing(20);
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(510, 440, 168, 41));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pbConfirm = new QPushButton(verticalLayoutWidget_4);
        pbConfirm->setObjectName("pbConfirm");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font3.setPointSize(16);
        pbConfirm->setFont(font3);

        verticalLayout_4->addWidget(pbConfirm);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionCreate);
        menuMenu->addAction(actionPrint);
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(pbCreate, &QPushButton::clicked, formWidget, qOverload<>(&QWidget::show));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreate->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Practical Work \342\204\2269", nullptr));
        pbCreate->setText(QCoreApplication::translate("MainWindow", "Create Object", nullptr));
        pbShow->setText(QCoreApplication::translate("MainWindow", "Show Object", nullptr));
        pbExit->setText(QCoreApplication::translate("MainWindow", "Exit the program", nullptr));
        idLb->setText(QCoreApplication::translate("MainWindow", "Enter ID: ", nullptr));
        surnameLb->setText(QCoreApplication::translate("MainWindow", "Enter Surname:", nullptr));
        firstNameLb->setText(QCoreApplication::translate("MainWindow", "Enter First Name:", nullptr));
        lastNameILb->setText(QCoreApplication::translate("MainWindow", "Enter Last Name: ", nullptr));
        addressLb->setText(QCoreApplication::translate("MainWindow", "Enter Address: ", nullptr));
        phoneNumberLb->setText(QCoreApplication::translate("MainWindow", "Enter Phone Number: ", nullptr));
        medNumLb->setText(QCoreApplication::translate("MainWindow", "Enter Medical Number: ", nullptr));
        diagnosisLb->setText(QCoreApplication::translate("MainWindow", "Enter Diagnosis: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Input all the data:", nullptr));
        pbConfirm->setText(QCoreApplication::translate("MainWindow", "Confirm and create", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
