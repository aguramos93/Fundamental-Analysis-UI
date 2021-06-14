#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    callAPIpython();
}

void MainWindow::callAPIpython(){

    QString argName = QInputDialog::getText(this, "Entrada", "Ingrese una empresa: ");
    QProcess p;
    QStringList params;
    QString pythonPath = "/home/aguramos93/repos/Fundamental-Analysis-UI/scripts/FMP-API-call.py";

    params << argName;
    p.start(pythonPath, params);
    bool end = p.waitForFinished(-1);

    qDebug() << "Data file updated" << "\nProcess finished: " << end;
    qDebug() << "\n" << argName;
    ui->symbol->setText(argName);

    readJson();

}

void MainWindow::readJson(){

    QFile file;
    file.setFileName("/home/aguramos93/repos/Fundamental-Analysis-UI/scripts/files/data.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QJsonParseError jsonError;
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll(),&jsonError);
    if (jsonError.error != QJsonParseError::NoError){
        qDebug() << jsonError.errorString();
    }

    QList<QVariant> list = doc.toVariant().toList();
    QMap<QString, QVariant> map = list[0].toMap();

    QString price = map["price"].toString();
    QString companyName = map["companyName"].toString();
    QString currency = map["currency"].toString();
    QString country = map["country"].toString();
    QString sector = map["sector"].toString();
    QString ceo = map["ceo"].toString();

    ui->price->setText(price);
    ui->companyName->setText(companyName);
    ui->currency->setText(currency);
    ui->country->setText(country);
    ui->sector->setText(sector);
    ui->ceo->setText(ceo);

}


MainWindow::~MainWindow()
{
    delete ui;
}

