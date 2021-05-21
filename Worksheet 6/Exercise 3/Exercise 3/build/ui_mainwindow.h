/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVTKOpenGLWidget *qvtkWidget;
    QPushButton *loadButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *objectRedButton;
    QPushButton *objectGreenButton;
    QPushButton *objectBlueButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1457, 880);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #dcdcdc ;\n"
"border-color: #b0b0b0;\n"
"border-style: solid;\n"
"border-width: 3px;\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
"{\n"
"border-width:5px;\n"
"}"));
        qvtkWidget = new QVTKOpenGLWidget(centralwidget);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(0, 0, 1461, 531));
        qvtkWidget->setStyleSheet(QString::fromUtf8(""));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(10, 550, 231, 41));
        loadButton->setStyleSheet(QString::fromUtf8("border-style: outset ;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 550, 251, 41));
        label->setStyleSheet(QString::fromUtf8("border: 4px inset #b0b0b0 ;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, 520, 1471, 16));
        label_2->setStyleSheet(QString::fromUtf8("border: 10px solid #b0b0b0 ;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 840, 1471, 16));
        label_3->setStyleSheet(QString::fromUtf8("border: 10px solid #b0b0b0 ;"));
        objectRedButton = new QPushButton(centralwidget);
        objectRedButton->setObjectName(QString::fromUtf8("objectRedButton"));
        objectRedButton->setGeometry(QRect(250, 624, 249, 31));
        objectRedButton->setIconSize(QSize(20, 30));
        objectGreenButton = new QPushButton(centralwidget);
        objectGreenButton->setObjectName(QString::fromUtf8("objectGreenButton"));
        objectGreenButton->setGeometry(QRect(250, 694, 249, 31));
        objectBlueButton = new QPushButton(centralwidget);
        objectBlueButton->setObjectName(QString::fromUtf8("objectBlueButton"));
        objectBlueButton->setGeometry(QRect(250, 764, 249, 31));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        loadButton->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Load New File</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        loadButton->setText(QCoreApplication::translate("MainWindow", "Load New File", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Object Colour Options</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        objectRedButton->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        objectGreenButton->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        objectBlueButton->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
