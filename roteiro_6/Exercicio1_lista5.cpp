/*
Programador: Rafael Dória
Data: 05/06/2013
Descrição: Lista 5 Exercício 1
*/

#include <iostream.h>
int main()
{
    int mtx[2][4],quantl1=0,quantl2=0,par=0;
    float soma=0,media;
    
    for(int i=0;i<2;i++)
    {for(int j=0;j<4;j++)
    { cout<<"Informe um numero: ";
      cin>>mtx[i][j];
      if(i==0)
      { if(mtx[i][j]>=12 and mtx[i][j]<=20)
      {quantl1++;}
      }
      if(i==1)
      { if(mtx[i][j]>=12 and mtx[i][j]<=20)
      {quantl2++;}
      }
      if ((mtx[i][j]%2)==0)
      {soma+=mtx[i][j];
       par++;}
      }
    }
    media=soma/par;
    cout<<"Quantidade de numeros entre 12 e 20 na linha 1: "<<quantl1<<"\n";
    cout<<"Quantidade de numeros entre 12 e 20 na linha 2: "<<quantl2<<"\n";
    cout<<"Media dos numeros pares: "<<media<<"\n";
    
    system("pause");
}
