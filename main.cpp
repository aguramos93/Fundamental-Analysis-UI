#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;  
//    w.setStyleSheet("background-image: url(/home/aguramos93/repos/Fundamental-Analysis-UI/pictures/fondo.jpg); background-repeat: none; background-position: center;");
    w.show();
    return a.exec();
}
