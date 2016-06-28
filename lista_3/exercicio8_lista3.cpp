/*
Programador: Rafael Dória
data: 11/05/2013
Descrição: Exercicio 8 lista 3
*/

#include <iostream.h>

int main()
{ float altura=0,base=0,area=0;
  while(base<=0 or altura<=0)
  {
  cout<<"Informe valor da base do triangulo: ( >0 ) ";
  cin>>base;
  cout<<"Informe valor da altura do triangulo: ( >0 )";
  cin>>altura;
  if (base<=0 or altura<=0)
  {cout<<"\nDados invalidos,informe valores >0. ";
   cout<<"\n";}
  area=(base*altura)/2;
  }
  cout<<"Area do triangulo: "<<area;
  cout<<"\n";
  system("pause");
    }
