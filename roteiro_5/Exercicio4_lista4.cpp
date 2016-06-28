/* 
Programador : Rafael Dória
Data: 23/05/2013
Descrição: Lista 4 Exercício 4
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{ int vet[10],number,aux;
  for (int i=0;i<10;i++)
      { cout<<"Digite um valor: ";
        cin>>number;
        vet[i]=number;
      }
      for (int i=0;i<10;i++)
          for (int j=i+1;j<10;j++)
          { if(vet[i]>vet[j])
          { aux=vet[i];
          vet[i]=vet[j];
          vet[j]=aux;}
      }
      cout<<"Em ordem crescente: ";
      for (int i=0;i<10;i++)
      {cout<<vet[i]<<", ";}
      cout<<"\n";
      system("pause");
    }
