/*
Programador: Rafael D?ria
Data: 22/05/2013
Descri??o: Lista 4 Exerc?cio 1
*/

#include<iostream.h>
#include<math.h>
int main()
{ int vet[15];
  for(int i=0;i<15;i++)
  { cout<<"Informe um numero: ";
    cin>>vet[i];
    }
  cout<<"Posicao de elementos iguais a 30: ";
  for(int i=0;i<15;i++)
   {if (vet[i]==30)
   {cout<<i<<" , ";}
   }
    cout<<"\n";
    system("pause");
 }
