#include "mainwindow.h"
#include <QDebug>
#include <QApplication>
#include <businesslogic.h>

int main(int argc,char * argv[])
{
    QApplication app(argc,argv);
    qDebug() << "hello bitch";

    qDebug() << funAdd(1,4);

    MainWindow w;
    w.show();

    return app.exec();
}
