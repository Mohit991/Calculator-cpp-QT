#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include <QIntValidator>
#include<QPixmap>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Mohit/Downloads/interstellar-wide.jpg");
    int w=ui->pic->width();
    int h=ui->pic->height();

    ui->pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->statusBar->addPermanentWidget(ui->lab );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply =  QMessageBox::question(this,"What really!!","Do you really want to quit |:",QMessageBox::Yes|QMessageBox::No);
   if(reply==QMessageBox::Yes){
       QApplication::quit();
   }
}


void MainWindow::on_add_clicked()
{
    int a = ui->one->text().toInt();
     int b = ui->two->text().toInt();

     QString c = QString::number(a+b); // instead of new ...
     ui->res->setText(c);
     ui->statusBar->showMessage("Added!!");

}

void MainWindow::on_sub_clicked()
{
    int a = ui->one->text().toInt();
     int b = ui->two->text().toInt();

     QString c = QString::number(a-b); // instead of new ...
     ui->res->setText(c);

}

void MainWindow::on_mul_clicked()
{
    int a = ui->one->text().toInt();
     int b = ui->two->text().toInt();

     QString c = QString::number(a*b); // instead of new ...
     ui->res->setText(c);

}

void MainWindow::on_dev_clicked()
{
    int a = ui->one->text().toInt();
     int b = ui->two->text().toInt();

     QString c = QString::number(a/b); // instead of new ...
     ui->res->setText(c);

}
