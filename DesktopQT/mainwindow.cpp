#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/gagik/Downloads/2.jpg");
    ui->label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
      ui->textEdit->toPlainText();
      std::string name = ui->textEdit->toPlainText().toUtf8().constData();
      ui->pushButton->setText(ui->textEdit->toPlainText());

}
