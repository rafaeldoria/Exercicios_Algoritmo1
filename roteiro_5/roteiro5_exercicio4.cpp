/* 
Programador : Rafael D?ria
Data: 23/05/2013
Descri??o: Roteiro 5 Exerc?cio 4
*/

#include <iostream.h>
#include <math.h>
int main()

{ int vetorOriginal[10],vetorInvertido[10];
      for(int i=0;i<10;i++)
      {cout<<"Informe um numero: ";
       cin>>vetorOriginal[i];
       }
       for(int i=0,j=9;i<10;i++,j--)
       {vetorInvertido[j]=vetorOriginal[i];}
       cout<<"Numeros em posicao original: ";
       for(int i=0;i<10;i++)
       {cout<<vetorOriginal[i]<<"| ";}
       cout<<"\nNumeros em posicao invertida: ";
       for(int i=0;i<10;i++)
       {cout<<vetorInvertido[i]<<"| ";}
       cout<<"\n";
        system("pause");            
    }
