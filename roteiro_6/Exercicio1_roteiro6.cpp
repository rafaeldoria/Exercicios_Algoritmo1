/*  
Programador: Rafael Dória 
Data: 07/06/2013 
Descrição: Exerc?cio 1 Roteiro 6 
*/
  
#include<iostream.h> 
int main() 
{ 
int matriz[4][5],vet[5]; 
    for(int i=0;i<5;i++) 
    {vet[i]=0;} 
    for(int l=0;l<4;l++) 
            {for(int c=0;c<5;c++) 
            {cout<<"Digite um numero: "; 
            cin>>matriz[l][c]; 
            if(c==0) 
            {vet[0]+=matriz[l][c];} 
            else if(c==1) 
            {vet[1]+=matriz[l][c];} 
            else if(c==2) 
            {vet[2]+=matriz[l][c];} 
            else if(c==3) 
            {vet[3]+=matriz[l][c];} 
            else if(c==4) 
            {vet[4]+=matriz[l][c];} 
            } 
            }    
            cout<<"Soma de valores de cada coluna: "; 
            for(int i=0;i<5;i++) 
            {cout<<vet[i]<<"/ ";} 
            cout<<"\nTodos os valores: "; 
            for(int l=0;l<4;l++) 
            {for(int c=0;c<5;c++) 
            {cout<<matriz[l][c]<<"/ ";} 
            }  
            cout<<"\n";        
            system("pause"); 
} 
