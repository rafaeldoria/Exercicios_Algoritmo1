/* 
Programador: Rafael Dória
Data: 20/05/2013
Descrição : Roteiro 5 Exercício 1
*/

#include <iostream.h>
#include <math.h>
int main()

{   int vet[20],soma=0,negativos=0;
    for(int i=0;i<20;i++)
    { cout<<"Digite um numero: ";
      cin>>vet[i];
      if(vet[i]>=0)
         {soma+=vet[i];}
      else if(vet[i]<0)
      {negativos++;}
              
            }
      cout<<"Soma dos numeros: "<<soma<<"\n";
      cout<<"Numeros negativos: "<<negativos<<"\n";
      system("pause");
    }
