/* 
Programador: Rafael Dória   
Data: 12/04/2013
Descrição: Exercício 1 Roteiro 4
*/

#include <iostream.h>
int main()

{
    int num,soma,imp;
    soma=0;
    imp=0;
    for(int i=1;i<=10;i++)
    {
       cout<<"Informe um numero: ";
       cin>>num;
            if((num%2)==0)
            { soma=soma+num;
            }
            else
            { imp++;  }
    }
    cout<<"\n A soma dos numeros pares e: "<<soma;
    cout<<"\n Total de numeros impares digitados: "<<imp;
    cout<<"\n";
    system("PAUSE");
}       
