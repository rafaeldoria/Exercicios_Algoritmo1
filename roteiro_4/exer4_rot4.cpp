/*
Programador: Rafael Dória
Data: 22/04
Descrição: Roteiro 4, exercício 4
*/

#include<iostream.h>
int main()
{
    int tres=0,sete=0,num=0;
    do 
    {
     cout<<"Informe um numero (numero < que 0 p/ sair)";
     cin>>num;
     cout<<"\n";
     if((num%3)==0)
     {tres++;}
     if((num%7)==0)
     {sete++;}       
     }while(num>=0);
     cout<<"\n Divisiveis por 3: "<<tres;
     cout<<"\n Divisiveis por 7: "<<sete;
     cout<<"\n";
     system("PAUSE");
    }
