/*
Programador: Rafael Dória
Data: 05/06/2013
Descrição: Lista 5 Exercício 2
*/

#include <iostream>

using namespace std;

int main()

{
int mtx1[10][10];
int mtx2[10][10];
int mtx3[10][10];

for(int i=0;i<10;i++)
{for(int j=0;j<10;j++)
{mtx1[i][j]=i*j;}
}

for(int i=0;i<10;i++)
{for(int j=0;j<10;j++)
{mtx2[i][j]=i*j;}
}

for(int i=0;i<10;i++)
{for(int j=0;j<10;j++)
{mtx3[i][j]=mtx1[i][j]+mtx2[i][j];}
}

for(int i=0;i<10;i++)
{cout<<"\n";
for(int j=0;j<10;j++) 
{cout<<mtx3[i][j]<<"|";}
}
cout<<"\n";
system("pause");   
}

