//
// Created by karl on 8/27/20.
//

#include <QApplication>
#include "ui/mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    a.setActiveWindow(&w);
    return a.exec();
}


