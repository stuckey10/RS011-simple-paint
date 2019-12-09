#include <iostream>
#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionClose_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Warning", "The document has been modified.\nDo you want to save changes or discard them?",
                                  QMessageBox::Save  | QMessageBox::Discard | QMessageBox::Cancel );
    if (reply == QMessageBox::Discard) {
        QApplication::quit();
    }
    else if (reply == QMessageBox::Save){
        //TODO sacuvati
    }
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
            tr("Open Picture"), "",
             tr("Image Files (*.png *.jpg *.jpeg)"));

    //std::cout << fileName.toStdString() << std::endl;
}