#ifndef ELI_GAUSS_H
#define ELI_GAUSS_H

#include <QMainWindow>

namespace Ui {
class Eli_Gauss;
}

class Eli_Gauss : public QMainWindow
{
    Q_OBJECT

public:
    explicit Eli_Gauss(QWidget *parent = 0);
    ~Eli_Gauss();
    double arreglo[4][5];

private slots:
    void Metodo();
    void borrar();


private:
    Ui::Eli_Gauss *ui;
};

#endif // ELI_GAUSS_H
