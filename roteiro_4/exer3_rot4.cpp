/*
Programador: Rafael Dória
Data: 22/04
Descrição: Roteiro 4, exercício 3
*/

#include <iostream.h>
int main()
{
    float num,maior,menor,cont=0;
    while (num!=-1)
    {
       cout<<"\n Informe um numero positivo: (-1 para sair)";
       cin>>num;
       if (cont==0)
       {maior=num;
        menor=num;}
       cont++;
       if(num>maior)
       {maior=num;}
       if(num<menor and num!=-1)
       {menor=num;}          
          }
       cout<<"\n Maior numero: "<<maior;
       cout<<"\n Menor numero: "<<menor;
          system("PAUSE");
    }
