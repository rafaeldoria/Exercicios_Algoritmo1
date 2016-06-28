/* 
Programador : Rafael D?ria
Data: 23/05/2013
Descri??o: Roteiro 5 Exercicio 3
*/

#include<iostream.h>
int main()
{ int vet[15],two=0;
  for(int i=0;i<15;i++)
  { cout<<"Informe um numero: "; 
  cin>>vet[i];
  if(vet[i]==2)
  {two++;}
  }
  cout<<"\nPosicoes iguais a 2: "<<two;
  cout<<"\nOs multiplos de 3: ";
  for(int i=0;i<15;i++)
  { if((vet[i]%3)==0)
   cout<<vet[i]<<"| "; }
  cout<<"\nOs multiplos de 2 estao nas seguintes posicoes: ";
  for(int i=0;i<15;i++)
  { if((vet[i]%2)==0)
   cout<<i<<"| ";}
   cout<<"\n";
   system("pause");
    }
