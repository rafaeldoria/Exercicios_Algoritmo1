/*
Programador: Rafael D?ria
Data: 22/05/2013
Descri??o: Lista 4 Exerc?cio 2
*/

#include <iostream.h>
#include <math.h>
int main()
{ int vet[6],par=0,impar=0;
  for(int i=0;i<6;i++)
  { cout<<"Informe um numero: ";
    cin>>vet[i];
    if ((vet[i]%2)==0)
    {par++;
     }
    else
    {impar++;}
    }
   cout<<"Numeros pares: ";
   for(int i=0;i<6;i++)
   {if((vet[i]%2)==0)
    cout<<vet[i]<<" , ";}   
   cout<<"\nAssim total de pares: "<<par<<"\n";
   cout<<"Numeros impares: ";
   for(int i=0;i<6;i++)
   {if((vet[i]%2)!=0)
    cout<<vet[i]<<" , ";}   
   cout<<"\nAssim total de pares: "<<impar<<"\n";   
      
   system("pause");
}
