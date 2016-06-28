/*
Programador: Rafael Dória
Data: 10/03/2013
Descrição: Exercício 3 roteiro 2
*/

#include<iostream.h>
#include<math.h>

int main()
{
    float a,bme,bma,alt;
    cout<<"informe a base menor do trapezio: ";
    cin>>bme;
    cout<<"informe a base maior do trapezio: ";
    cin>>bma;
    cout<<"inforem a altura do trapezio: ";
    cin>>alt;
             a=(alt*(bme+bma))/2;
    cout<<"O valor da area do trapezio = "<<a;
    cout<<"\n";
    system("PAUSE");   
    }
