/* 
Programador: Rafael Dória
Data: 20/05/2013
Descrição : Roteiro 5 Exercício 2
*/
#include<iostream.h>
#include<math.h>
int main()
{ int vet1[5],vet2[5],vet[10],cont1=0,cont2=0;
  for(int i=0;i<5;i++)
  {cout<<"Digite um numero: ";
   cin>>vet1[i]; }  
   for(int i=0;i<5;i++)
  {cout<<"Digite um numero: ";
   cin>>vet2[i]; }
     
   for (int i=0;i<10;i++)
   { if((i%2)==0)
     { vet[i]=vet1[cont1];
       cont1++;
     }
     else if((i%2)!=0)
     { vet[i]=vet2[cont2];
       cont2++;
     }
     }
   cout<<"\n";
   for (int i=0;i<10;i++)
   { cout<<vet[i]<<" | ";} 
     
   system("pause");
   
}
