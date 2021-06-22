#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::callAPIpython(QString &argName){

    QProcess p;
    QStringList params;
    QString location = QStandardPaths::writableLocation(QStandardPaths::HomeLocation);
    QString pythonPath = location + "/repos/Fundamental-Analysis-UI/scripts/FMP-API-call.py";

    params << argName;
    p.start(pythonPath, params);
    bool end = p.waitForFinished(-1);

    qDebug() << "\nData file updated" << "\nProcess finished: " << end;

    ui->symbol->setText(argName);

    readJson();

}

void MainWindow::readJson(){

    QFile file;
    file.setFileName("data.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QJsonParseError jsonError;
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll(), &jsonError);
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

void MainWindow::on_OK_clicked()
{
    QString argName = ui->lineEdit->text();
    callAPIpython(argName);
}

MainWindow::~MainWindow()
{
    delete ui;
}
