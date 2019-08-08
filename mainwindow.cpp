#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sha256.h"

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

void MainWindow::on_pushButton_clicked()
{
    std::string input = ui->lineEdit->text().toStdString();
    ui->textEdit->append(QString::fromStdString(sha256(input)));
}
