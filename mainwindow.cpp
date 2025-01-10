#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "passwordGenerator.h"
#include <QClipboard>

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

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    QString pass = QString::fromStdString(generarContraseña(value));
    ui->textEdit->setText(pass);
    ui->copyButton->setText("Copiar");

    ui->charLabel->setText("Caracteres: " + QString::number(value));
}

void MainWindow::on_copyButton_clicked()
{
    ui->copyButton->setText("Copiado!");
    QClipboard *clipboard = QGuiApplication::clipboard();
    clipboard->setText(ui->textEdit->toPlainText());
}


