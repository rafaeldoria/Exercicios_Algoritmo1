/* 
Programador : Rafael Dória
Data: 23/05/2013
Descrição: Lista 4 Exercício 5
*/

#include <iostream.h>
#include <math.h>
int main()
{ int quant,pos=0,neg=0;
  float number;
  cout<<"Informe quantidade numeros: ";
  cin>>quant;
  float vet[quant];
  for (int i=0;i<quant;i++)
  { cout<<"Informe um numero: ";
    cin>>number;
    if(number>0)
    {pos++;}
    if(number<0)
    {neg++;}
    vet[i]=number;
    }
    cout<<"Numeros digitados: ";
    for(int i=0;i<quant;i++)
    {cout<<vet[i]<<"| ";}
    cout<<"\nTotal positivos: "<<pos;
    cout<<"\nTotal negativos: "<<neg<<"\n";
    system("pause");
}
