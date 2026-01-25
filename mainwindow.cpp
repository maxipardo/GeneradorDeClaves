#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "passwordGenerator.h"
#include "historywindow.h"
#include <QClipboard>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(250, 230);
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
    historialDeClaves.prepend(ui->textEdit->toPlainText());
}


void MainWindow::on_historyButton_clicked()
{
    historywindow *hw = new historywindow();

    hw->setAttribute(Qt::WA_DeleteOnClose);
    hw->cargarClaves(this->historialDeClaves);

    hw->setWindowModality(Qt::ApplicationModal);
    hw->show();
}
