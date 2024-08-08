#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QIcon icon("./images/ico.jpeg"); // Assuming 'ico.png' is in the resource file
    w.setWindowIcon(icon);
    w.show();
    return a.exec();
}
