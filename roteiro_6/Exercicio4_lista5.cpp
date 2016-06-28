/*
Programador: Rafael Dória
Data: 05/06/2013
Descrição: Lista 5 Exercício 4
*/
#include<iostream.h>
#include<conio.h>
int main ()
{
int mtrx [3][4],i,j,cont=1;
for (i=0;i<3;i++)
{
for (j=0;j<4;j++)
{
mtrx[i][j]=cont+2;
cont++;
}
}
cout<<"\n"<<mtrx[0][1];
cout<<"\n"<<mtrx[1][2];
cout<<"\n"<<mtrx[2][3];
getch();
system("pause");
}
/* 
Quais são os valores da matriz que serão impressos na tela?
4
9
14
*/
