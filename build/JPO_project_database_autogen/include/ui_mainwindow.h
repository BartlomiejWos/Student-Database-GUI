/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *save_to_json;
    QPushButton *load_json_file;
    QPushButton *Display_Record;
    QLineEdit *lineEdit;
    QTextBrowser *Display;
    QLabel *ID_2;
    QLineEdit *ID_add;
    QLabel *name_2;
    QLineEdit *Name_ad;
    QLabel *surname_2;
    QLineEdit *Surname_add;
    QLabel *age_2;
    QLineEdit *Age_add;
    QPushButton *Add_Record;
    QLabel *label;
    QLineEdit *faculty;
    QLineEdit *field;
    QLineEdit *semester;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *Delete_Record;
    QPushButton *ShowALLRecords;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QTextBrowser *display_path;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 617);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        save_to_json = new QPushButton(centralwidget);
        save_to_json->setObjectName("save_to_json");
        save_to_json->setGeometry(QRect(140, 85, 113, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        font.setPointSize(12);
        save_to_json->setFont(font);
        load_json_file = new QPushButton(centralwidget);
        load_json_file->setObjectName("load_json_file");
        load_json_file->setGeometry(QRect(20, 85, 113, 24));
        load_json_file->setFont(font);
        Display_Record = new QPushButton(centralwidget);
        Display_Record->setObjectName("Display_Record");
        Display_Record->setGeometry(QRect(310, 175, 113, 24));
        Display_Record->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(350, 135, 71, 24));
        Display = new QTextBrowser(centralwidget);
        Display->setObjectName("Display");
        Display->setGeometry(QRect(510, 115, 241, 441));
        ID_2 = new QLabel(centralwidget);
        ID_2->setObjectName("ID_2");
        ID_2->setGeometry(QRect(30, 125, 31, 16));
        ID_2->setFont(font);
        ID_add = new QLineEdit(centralwidget);
        ID_add->setObjectName("ID_add");
        ID_add->setGeometry(QRect(140, 125, 113, 24));
        name_2 = new QLabel(centralwidget);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(30, 155, 41, 31));
        name_2->setFont(font);
        Name_ad = new QLineEdit(centralwidget);
        Name_ad->setObjectName("Name_ad");
        Name_ad->setGeometry(QRect(140, 165, 113, 24));
        surname_2 = new QLabel(centralwidget);
        surname_2->setObjectName("surname_2");
        surname_2->setGeometry(QRect(30, 205, 61, 20));
        surname_2->setFont(font);
        Surname_add = new QLineEdit(centralwidget);
        Surname_add->setObjectName("Surname_add");
        Surname_add->setGeometry(QRect(140, 205, 113, 24));
        age_2 = new QLabel(centralwidget);
        age_2->setObjectName("age_2");
        age_2->setGeometry(QRect(30, 245, 31, 16));
        age_2->setFont(font);
        Age_add = new QLineEdit(centralwidget);
        Age_add->setObjectName("Age_add");
        Age_add->setGeometry(QRect(140, 245, 113, 24));
        Add_Record = new QPushButton(centralwidget);
        Add_Record->setObjectName("Add_Record");
        Add_Record->setGeometry(QRect(140, 475, 113, 24));
        Add_Record->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 135, 51, 20));
        label->setFont(font);
        faculty = new QLineEdit(centralwidget);
        faculty->setObjectName("faculty");
        faculty->setGeometry(QRect(140, 285, 113, 24));
        field = new QLineEdit(centralwidget);
        field->setObjectName("field");
        field->setGeometry(QRect(140, 325, 113, 24));
        semester = new QLineEdit(centralwidget);
        semester->setObjectName("semester");
        semester->setGeometry(QRect(140, 365, 113, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 285, 49, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 325, 49, 16));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 365, 91, 16));
        label_4->setFont(font);
        Delete_Record = new QPushButton(centralwidget);
        Delete_Record->setObjectName("Delete_Record");
        Delete_Record->setGeometry(QRect(310, 235, 113, 24));
        Delete_Record->setFont(font);
        ShowALLRecords = new QPushButton(centralwidget);
        ShowALLRecords->setObjectName("ShowALLRecords");
        ShowALLRecords->setGeometry(QRect(570, 85, 121, 24));
        ShowALLRecords->setFont(font);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(150, 405, 16, 22));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(150, 435, 21, 22));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 405, 121, 20));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 435, 121, 16));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 85, 221, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(14);
        font1.setBold(false);
        label_7->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 0, 171, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Display")});
        font2.setPointSize(18);
        label_9->setFont(font2);
        display_path = new QTextBrowser(centralwidget);
        display_path->setObjectName("display_path");
        display_path->setGeometry(QRect(20, 40, 391, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(430, 50, 291, 16));
        label_8->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        save_to_json->setText(QCoreApplication::translate("MainWindow", "Save Database", nullptr));
        load_json_file->setText(QCoreApplication::translate("MainWindow", "Load Database", nullptr));
        Display_Record->setText(QCoreApplication::translate("MainWindow", "Display Record", nullptr));
        ID_2->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        name_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        surname_2->setText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        age_2->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        Add_Record->setText(QCoreApplication::translate("MainWindow", "Add Record", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter ID  ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Faculty", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Field", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Semester (nr)", nullptr));
        Delete_Record->setText(QCoreApplication::translate("MainWindow", "Delete Record", nullptr));
        ShowALLRecords->setText(QCoreApplication::translate("MainWindow", "Show All Records", nullptr));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Full-Time studies", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Part-Time studies", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Search / Delete Record by ID", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Student Database", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Currently used Database (only .json format)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
