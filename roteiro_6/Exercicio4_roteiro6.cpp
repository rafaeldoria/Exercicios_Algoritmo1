/* 
Programador: Rafael Dória
Data: 07/06/2013
Descrição: Exercício 4 Roteiro 6
*/

#include<iostream.h>
int main()
{
int mtx[5[5],line=0,column=0,soma=0;
    for(int l=0;l<5;l++)
            {for(int c=0;c<5;c++)
            {cout<<"Digite um numero: ";
            cin>>mtx[l][c];
            soma+=mtx[l][c];
            if(l==3)
            {line+=mtx[l][c];}
            if(c==1)
            {column+=mtx[l][c];}
            }
            } 
    cout<<"Soma elementos da linha 4: "<<line<<"\n";
    cout<<"Soma elementos da coluna 2: "<<column<<"\n";
    cout<<"Soma elementos da matriz: "<<soma<<"\n";
    system("pause");   
}
