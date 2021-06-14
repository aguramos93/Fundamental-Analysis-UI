#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QInputDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void callAPIpython(QString &argName);
    void readJson();
    void on_OK_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
