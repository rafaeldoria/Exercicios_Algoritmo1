/*
Programador: Rafael Dória
Data: 05/06/2013
Descrição: Lista 5 Exercício 5
*/
#include<iostream.h>
int main()
{
int matriz[8][6];
float lineone=0.0,linetwo=0,linethree=0,linefour=0,linefive=0,linesix=0,lineseven=0,lineeight=0;
float average;
for (int m=0;m<8;m++)
    {for(int n=0;n<6;n++)
    {cout<<"Informe um numero: ";
    cin>>matriz[m][n];
    if(m==0)
    {lineone+=matriz[m][n];}
    if(m==1)
    {linetwo+=matriz[m][n];}
    if(m==2)
    {linethree+=matriz[m][n];}
    if(m==3)
    {linefour+=matriz[m][n];}
    if(m==4)
    {linefive+=matriz[m][n];}
    if(m==5)
    {linesix+=matriz[m][n];}
    if(m==6)
    {lineseven+=matriz[m][n];}
    if(m==7)
    {lineeight+=matriz[m][n];}
        }
}   
lineone=lineone/6;
cout<<"A media da soma dos elementos na linha 1: "<<lineone<<"\n";
linetwo=linetwo/6;
cout<<"A media da soma dos elementos na linha 2: "<<linetwo<<"\n";
linethree=linethree/6;
cout<<"A media da soma dos elementos na linha 3: "<<linethree<<"\n";
linefour=linefour/6;
cout<<"A media da soma dos elementos na linha 4: "<<linefour<<"\n";
linefive=linefive/6;
cout<<"A media da soma dos elementos na linha 5: "<<linefive<<"\n";
linesix=linesix/6;
cout<<"A media da soma dos elementos na linha 6: "<<linesix<<"\n";
lineseven=lineseven/6;
cout<<"A media da soma dos elementos na linha 7: "<<lineseven<<"\n";
lineeight=lineeight/6;
cout<<"A media da soma dos elementos na linha 8: "<<lineeight<<"\n";

system("pause");
}
