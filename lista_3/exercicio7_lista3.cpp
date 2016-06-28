/* 
Programador: Rafael Dória
Data: 11/05/2012
Descrição: Exercicio 7 lista 3
*/

#include<iostream.h>
int main()
{ char opcao;
  float salat,salnov;
  while(salat>0)
  { cout<<"Informe salario atual do funcionario: (p/ sair, numero <= 0) ";
    cin>>salat;
    if(salat>0)                
    {cout<<"\n Menu para aumento salarial: ";
    cout<<"\n A - Para aumento de 8% ";
    cout<<"\n B - Para aumento de 11% ";
    cout<<"\n C - Para aumento de R$ 450,00 ";
    cout<<"\n Digite opcao desejada: ";
    cin>>opcao;
    if(opcao=='a' or opcao=='A')
    { salnov=salat+((salat/100)*8);}
    if(opcao=='b' or opcao=='B')
    { salnov=salat+((salat/100)*11);}
    if(opcao=='c' or opcao=='C')
    { salnov=salat+450;}
    cout<<"\n Novo salario do funcionario: R$ "<<salnov;
    cout<<"\n";}
}
system("pause");

    
}
