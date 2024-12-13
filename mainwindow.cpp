#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPushButton>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setDisabled(true);
    ui->radioButton->setChecked(true);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_3->setChecked(false);
    QString text;
    text = ui->radioButton->text();
    ui->statusBar->showMessage(text);
    ui->calendarWidget->showToday();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_2->setEnabled(true);
    ui->pushButton->setDisabled(true);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setDisabled(true);
}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    double arg2 = pow(arg1, 2);
    ui->label->setSelection(4,4);
    ui->label->setNum(arg2);
}


void MainWindow::on_radioButton_clicked()
{
    ui->radioButton_2->setChecked(false);
    ui->radioButton_3->setChecked(false);
    QString text;
    text = ui->radioButton->text();
    ui->statusBar->showMessage(text);
}


void MainWindow::on_radioButton_2_clicked()
{
    ui->radioButton->setChecked(false);
    ui->radioButton_3->setChecked(false);
    QString text;
    text = ui->radioButton_2->text();
    ui->statusBar->showMessage(text);
}


void MainWindow::on_radioButton_3_clicked()
{
    ui->radioButton_2->setChecked(false);
    ui->radioButton->setChecked(false);
    QString text;
    text = ui->radioButton_3->text();
    ui->statusBar->showMessage(text);
}



void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    ui->dateEdit->setDate(date);
}


void MainWindow::on_dateEdit_dateChanged(const QDate &date)
{
    ui->calendarWidget->setSelectedDate(date);
}

