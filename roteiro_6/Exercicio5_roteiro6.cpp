/*  
Programador: Rafael Dória 
Data: 07/06/2013 
Descrição: Exerc?cio 5 Roteiro 6 
*/
#include<iostream.h> 
int main() 
{ 
int estq[4][3];    
int arma=0,armb=0,armc=0,armd=0,maior,menor;  
for(int l=0;l<4;l++) 
{for(int c=0;c<3;c++) 
{cout<<"Informe quantidade do produto "<<c+1<<" no armazem "<<l+1<<": "; 
cin>>estq[l][c]; 
if(l==0) 
{arma+=estq[l][c];} 
if(l==1) 
{armb+=estq[l][c];} 
if(l==2) 
{armc+=estq[l][c];} 
if(l==3) 
{armd+=estq[l][c];} 

if(l==0 and c==1)
{maior=estq[l][c];}
if(c==1)
{if(estq[l][c]>maior)
{maior=estq[l][c];}
}

if(l==0 and c==0)
{menor=estq[l][c];}
if(c==0)
{if(estq[l][c]<menor)
{menor=estq[l][c];}
}
         }          
} 
         cout<<"Quantidade de produto em cada armazem: \n"; 
         cout<<"Armazem 1: "<<arma<<"\n"; 
         cout<<"Armazem 2: "<<armb<<"\n"; 
         cout<<"Armazem 3: "<<armc<<"\n"; 
         cout<<"Armazem 4: "<<armd<<"\n"; 
         cout<<maior<<"\n";
         cout<<menor<<"\n";
             
         system("pause");      
           
} 
