#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setOverrideCursor(QCursor(QPixmap("/home/ducdung/bonkGame/baseball-bat-128.png")));
    MainWindow w;
    w.show();

    return a.exec();
}
