#include "eli_gauss.h"
#include "ui_eli_gauss.h"
#include "math.h"

Eli_Gauss::Eli_Gauss(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Eli_Gauss)
{
    ui->setupUi(this);
    connect(ui->calcular,SIGNAL(clicked()),this,SLOT(Metodo()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar()));
}

Eli_Gauss::~Eli_Gauss()
{
    delete ui;
}
void Eli_Gauss::Metodo(){
    /*The metod starts*/
    QString resultado,var1,var2,var3,var4;
    /*The variables take the value*/
        /*The value of the program id added to the matrix*/
        arreglo[0][0]=ui->a1->value();
        arreglo[1][0]=ui->a2->value();
        arreglo[2][0]=ui->a3->value();
        arreglo[3][0]=ui->a4->value();
        arreglo[0][1]=ui->b1->value();
        arreglo[1][1]=ui->b2->value();
        arreglo[2][1]=ui->b3->value();
        arreglo[3][1]=ui->b4->value();
        arreglo[0][2]=ui->c1->value();
        arreglo[1][2]=ui->c2->value();
        arreglo[2][2]=ui->c3->value();
        arreglo[3][2]=ui->c4->value();
        arreglo[0][3]=ui->d1->value();
        arreglo[1][3]=ui->d2->value();
        arreglo[2][3]=ui->d3->value();
        arreglo[3][3]=ui->d4->value();
        arreglo[0][4]=ui->A->value();
        arreglo[1][4]=ui->B->value();
        arreglo[2][4]=ui->C->value();
        arreglo[3][4]=ui->D->value();

        double X1,X2,X3,X4;
        /*Then new variables are created for the op*/
        int n=4,x=0;

            for(int i=0;i<n-1;i++){
                /*The for cycle are started to make the calculations*/
                for(int j=0;j<=n;j++){

                    arreglo[i+1][j]=(arreglo[i+1][j]-((arreglo[i][i]*arreglo[i+1][i])/arreglo[i][i]));
                   if(x<=1){
                        arreglo[i+2][j]=(arreglo[i+2][j]-((arreglo[i][i]*arreglo[i+2][i])/arreglo[i][i]));
                  }
                  if(x==0){
                        arreglo[i+3][j]=(arreglo[i+3][j]-((arreglo[i][i]*arreglo[i+3][i])/arreglo[i][i]));
                   }
                   }
                    x=x+1;
            }
    /*Now we find the value of x*/
    X4=(arreglo[3][4]/arreglo[3][3]);
    X3=((arreglo[2][4]-(arreglo[2][3]*X4))/arreglo[2][2]);
    X2=((arreglo[1][4]-(arreglo[1][3]*X4)-(arreglo[1][2]*X3))/arreglo[1][1]);
    X1=((arreglo[0][4]-(arreglo[0][3]*X4)-(arreglo[0][2]*X3)-(arreglo[0][1]*X2))/arreglo[0][0]);
    resultado.append("\nValor de X1= ").append(var1.setNum(X1)).append("\nValor de X2= ").append(var2.setNum(X2)).append("\nValor de X3= ").append(var3.setNum(X3)).append("\nValor de X4= ").append(var4.setNum(X4));
    ui->Resultado->setText(resultado);
}
void Eli_Gauss::borrar(){
    /*The function to clean starts, all the variables are erase*/
    ui->a1->setValue(0.00);
    ui->b1->setValue(0.00);
    ui->c1->setValue(0.00);
    ui->d1->setValue(0.00);
    ui->a2->setValue(0.00);
    ui->b2->setValue(0.00);
    ui->c2->setValue(0.00);
    ui->d2->setValue(0.00);
    ui->a3->setValue(0.00);
    ui->b3->setValue(0.00);
    ui->c3->setValue(0.00);
    ui->d3->setValue(0.00);
    ui->a4->setValue(0.00);
    ui->b4->setValue(0.00);
    ui->c4->setValue(0.00);
    ui->d4->setValue(0.00);
    ui->A->setValue(0.00);
    ui->B->setValue(0.00);
    ui->C->setValue(0.00);
    ui->D->setValue(0.00);
    ui->Resultado->clear();
}
