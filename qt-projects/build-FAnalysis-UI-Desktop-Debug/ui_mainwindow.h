/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *symbol;
    QLabel *price;
    QLabel *companyName;
    QLabel *price_name;
    QLabel *currency;
    QLabel *country;
    QLabel *country_name;
    QLabel *sector_name;
    QLabel *sector;
    QLabel *ceo_name;
    QLabel *ceo;
    QLineEdit *lineEdit;
    QPushButton *OK;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"background-image: url(/home/aguramos93/repos/Fundamental-Analysis-UI/pictures/fondo.jpg);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        symbol = new QLabel(centralwidget);
        symbol->setObjectName(QString::fromUtf8("symbol"));
        symbol->setGeometry(QRect(150, 160, 131, 61));
        QFont font;
        font.setPointSize(40);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        symbol->setFont(font);
        symbol->setStyleSheet(QString::fromUtf8(""));
        price = new QLabel(centralwidget);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(580, 290, 121, 41));
        QFont font1;
        font1.setPointSize(20);
        price->setFont(font1);
        price->setStyleSheet(QString::fromUtf8(""));
        companyName = new QLabel(centralwidget);
        companyName->setObjectName(QString::fromUtf8("companyName"));
        companyName->setGeometry(QRect(140, 90, 901, 71));
        QFont font2;
        font2.setPointSize(40);
        companyName->setFont(font2);
        companyName->setStyleSheet(QString::fromUtf8("#symbol {\n"
"background: white;\n"
"border: 3px solid silver;\n"
"border-radius: 7px;\n"
"size: 40\n"
"}"));
        price_name = new QLabel(centralwidget);
        price_name->setObjectName(QString::fromUtf8("price_name"));
        price_name->setGeometry(QRect(500, 290, 101, 41));
        price_name->setFont(font1);
        price_name->setStyleSheet(QString::fromUtf8("#price {\n"
"background: white;\n"
"border: 3px solid silver;\n"
"border-radius: 7px;\n"
"}"));
        currency = new QLabel(centralwidget);
        currency->setObjectName(QString::fromUtf8("currency"));
        currency->setGeometry(QRect(670, 290, 161, 41));
        currency->setFont(font1);
        currency->setStyleSheet(QString::fromUtf8(""));
        country = new QLabel(centralwidget);
        country->setObjectName(QString::fromUtf8("country"));
        country->setGeometry(QRect(620, 330, 191, 41));
        country->setFont(font1);
        country->setStyleSheet(QString::fromUtf8(""));
        country_name = new QLabel(centralwidget);
        country_name->setObjectName(QString::fromUtf8("country_name"));
        country_name->setGeometry(QRect(500, 330, 111, 41));
        country_name->setFont(font1);
        country_name->setStyleSheet(QString::fromUtf8("#price {\n"
"background: white;\n"
"border: 3px solid silver;\n"
"border-radius: 7px;\n"
"}"));
        sector_name = new QLabel(centralwidget);
        sector_name->setObjectName(QString::fromUtf8("sector_name"));
        sector_name->setGeometry(QRect(500, 370, 111, 41));
        sector_name->setFont(font1);
        sector_name->setStyleSheet(QString::fromUtf8("#price {\n"
"background: white;\n"
"border: 3px solid silver;\n"
"border-radius: 7px;\n"
"}"));
        sector = new QLabel(centralwidget);
        sector->setObjectName(QString::fromUtf8("sector"));
        sector->setGeometry(QRect(600, 370, 501, 41));
        sector->setFont(font1);
        sector->setStyleSheet(QString::fromUtf8(""));
        ceo_name = new QLabel(centralwidget);
        ceo_name->setObjectName(QString::fromUtf8("ceo_name"));
        ceo_name->setGeometry(QRect(500, 410, 71, 41));
        ceo_name->setFont(font1);
        ceo_name->setStyleSheet(QString::fromUtf8("#price {\n"
"background: white;\n"
"border: 3px solid silver;\n"
"border-radius: 7px;\n"
"}"));
        ceo = new QLabel(centralwidget);
        ceo->setObjectName(QString::fromUtf8("ceo"));
        ceo->setGeometry(QRect(570, 410, 521, 41));
        ceo->setFont(font1);
        ceo->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 20, 481, 31));
        OK = new QPushButton(centralwidget);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(830, 20, 131, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        symbol->setText(QString());
        price->setText(QString());
        companyName->setText(QString());
        price_name->setText(QApplication::translate("MainWindow", "Price:", nullptr));
        currency->setText(QString());
        country->setText(QString());
        country_name->setText(QApplication::translate("MainWindow", "Country:", nullptr));
        sector_name->setText(QApplication::translate("MainWindow", "Sector:", nullptr));
        sector->setText(QString());
        ceo_name->setText(QApplication::translate("MainWindow", "CEO: ", nullptr));
        ceo->setText(QString());
        OK->setText(QApplication::translate("MainWindow", "OK", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
