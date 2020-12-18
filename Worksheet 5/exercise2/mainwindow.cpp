#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleAddButton() {
QMessageBox msgBox;
msgBox.setText("Add button was clicked");
msgBox.exec();
}
// Connect the released() signal of the addButton object to the handleAddButton slot in this object
connect( ui->addButton, &QPushButton::released, this, &MainWindow::handleAddButton );

void MainWindow::handleEditButton() {
QMessageBox msgBox;
msgBox.setText("Edit button was clicked");
msgBox.exec();
}
// Connect the released() signal of the editButton object to the handleeditButton slot in this object
connect( ui->editButton, &QPushButton::released, this, &MainWindow::handleEditButton );

void MainWindow::handleRemoveButton() {
QMessageBox msgBox;
msgBox.setText("Remove button was clicked");
msgBox.exec();
}
// Connect the released() signal of the removeButton object to the handleremoveButton slot in this object
connect( ui->removeButton, &QPushButton::released, this, &MainWindow::handleRemoveButton );