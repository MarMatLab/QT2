#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPushButton>
#include <iomanip>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_2->setVisible(true);
    ui->pushButton->setVisible(false);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton_2->setVisible(false);
    ui->pushButton->setVisible(true);
}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    arg1 = arg1 * arg1;
    ui->label->setNum(arg1);
}

