#include "eli_gauss.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Eli_Gauss w;
    w.show();

    return a.exec();
}
