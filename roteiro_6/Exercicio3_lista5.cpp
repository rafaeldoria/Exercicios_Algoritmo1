/*
Programador: Rafael Dória
Data: 05/06/2013
Descrição: Lista 5 Exercício 3
*/

#include<iostream.h>
int main()
{
int mtx[3][5],qtd=0;
for(int x=0;x<3;x++)
{for(int y=0;y<5;y++)
{cout<<"Digite um numero: ";
 cin>>mtx[x][y];
 if(mtx[x][y]>=15 and mtx[x][y]<=20)
 {qtd++;}
 system("cls");
   }
}    
cout<<"Quantide de numeros digitados entre 15 e 20: "<<qtd<<"\n";
system("pause");

}
