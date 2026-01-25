#include "historywindow.h"
#include "ui_historywindow.h"

historywindow::historywindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::historywindow)
{
    ui->setupUi(this);
    this->resize(400, 200);
}

void historywindow::cargarClaves(const QStringList &claves)
{
    ui->listaHistorial->clear();

    for(const QString &clave : claves) {
        ui->listaHistorial->addItem(clave);
    }
}

historywindow::~historywindow()
{
    delete ui;
}
