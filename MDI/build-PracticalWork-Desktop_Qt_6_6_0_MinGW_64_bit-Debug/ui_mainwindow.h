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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *designLb1;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *designLb2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *designLb3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *createPatPb;
    QPushButton *createDocPb;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *showPatPb;
    QPushButton *showDocPb;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QPushButton *exitPb;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(809, 600);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 231, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, -10, 111, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        designLb1 = new QLabel(verticalLayoutWidget);
        designLb1->setObjectName("designLb1");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bauhaus 93")});
        font.setPointSize(28);
        font.setBold(false);
        designLb1->setFont(font);

        verticalLayout_2->addWidget(designLb1);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(690, -10, 111, 71));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        designLb2 = new QLabel(verticalLayoutWidget_2);
        designLb2->setObjectName("designLb2");
        designLb2->setFont(font);
        designLb2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(designLb2);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(140, 30, 511, 71));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        designLb3 = new QLabel(verticalLayoutWidget_3);
        designLb3->setObjectName("designLb3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bauhaus 93")});
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setUnderline(true);
        designLb3->setFont(font1);
        designLb3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(designLb3);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 110, 721, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bauhaus 93")});
        font2.setPointSize(24);
        label_2->setFont(font2);
        label_2->setFrameShape(QFrame::WinPanel);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setFont(font2);
        label->setFrameShape(QFrame::WinPanel);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(110, 190, 211, 211));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        createPatPb = new QPushButton(verticalLayoutWidget_4);
        createPatPb->setObjectName("createPatPb");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bauhaus 93")});
        font3.setPointSize(20);
        createPatPb->setFont(font3);
        createPatPb->setAutoFillBackground(false);
        createPatPb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 144);"));

        verticalLayout_5->addWidget(createPatPb);

        createDocPb = new QPushButton(verticalLayoutWidget_4);
        createDocPb->setObjectName("createDocPb");
        createDocPb->setFont(font3);
        createDocPb->setAutoFillBackground(false);
        createDocPb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 144);"));

        verticalLayout_5->addWidget(createDocPb);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(480, 190, 211, 211));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        showPatPb = new QPushButton(verticalLayoutWidget_5);
        showPatPb->setObjectName("showPatPb");
        showPatPb->setFont(font3);
        showPatPb->setAutoFillBackground(false);
        showPatPb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 144);"));

        verticalLayout_6->addWidget(showPatPb);

        showDocPb = new QPushButton(verticalLayoutWidget_5);
        showDocPb->setObjectName("showDocPb");
        showDocPb->setFont(font3);
        showDocPb->setAutoFillBackground(false);
        showDocPb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 144);"));

        verticalLayout_6->addWidget(showDocPb);

        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(280, 460, 243, 80));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        exitPb = new QPushButton(verticalLayoutWidget_6);
        exitPb->setObjectName("exitPb");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bauhaus 93")});
        font4.setPointSize(22);
        exitPb->setFont(font4);
        exitPb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 144);"));

        verticalLayout_7->addWidget(exitPb);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 809, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        designLb1->setText(QCoreApplication::translate("MainWindow", "PR10", nullptr));
        designLb2->setText(QCoreApplication::translate("MainWindow", "PR10", nullptr));
        designLb3->setText(QCoreApplication::translate("MainWindow", "Well, what to do?", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CREATE OBJECT", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PRINT OBJECT", nullptr));
        createPatPb->setText(QCoreApplication::translate("MainWindow", "Create Patient", nullptr));
        createDocPb->setText(QCoreApplication::translate("MainWindow", "Create Doctor", nullptr));
        showPatPb->setText(QCoreApplication::translate("MainWindow", "Show Patient", nullptr));
        showDocPb->setText(QCoreApplication::translate("MainWindow", "Show Doctor", nullptr));
        exitPb->setText(QCoreApplication::translate("MainWindow", "Exit the program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
