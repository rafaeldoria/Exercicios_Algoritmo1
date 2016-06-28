/* 
Programador: Rafael Dória
Data: 07/06/2013
Descrição: Exercício 3 Roteiro 6
*/

#include<iostream.h>
int main()
{
int mtx[8][6],soma=0,n=0;
float med;
      for(int l=0;l<8;l++)
              {for(int c=0;c<6;c++)
              {cout<<"Digite um numero: ";
              cin>>mtx[l][c];
              if((c%2)!=0)
              {soma+=mtx[l][c];
              n++;}
              }}
              med=(soma*1.0)/(n*1.0);
              cout<<"Media da soma do elementos da colunas pares: "<<med<<"\n";
              system("pause");
}
