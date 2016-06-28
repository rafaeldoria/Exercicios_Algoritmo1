/* 
Programador: Rafael Dória
Data: 11/05/2012
Descrição: Exercicio 6 lista 3
*/

#include <iostream.h>

int main()
{ float soma=0,quant=0,media,maior=0,menor=1000000000,number=0;
    while(number!=-1)
  { cout<<"\n Digite um numero: (-1 para sair) ";
    cin>>number;
    if(number!=-1)
    {soma=soma+number;
    quant++;
    if (number>maior)
    {maior=number;}
    if (number<menor)
    {menor=number;}
}
} media=soma/quant;
 cout<<"\n A soma dos numeros: "<<soma;
 cout<<"\n Total de numeros: "<<quant;
 cout<<"\n Media dos numeros: "<<media;
 cout<<"\n Maior numero: "<<maior;
 cout<<"\n Menor numero: "<<menor;
 cout<<"\n";
 system("pause");
}             
   
    
    
    
    
