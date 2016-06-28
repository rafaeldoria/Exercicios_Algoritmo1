/*Programador: Rafael Dória   
RA: 31318303
Data: 18/03/2013
Descrição : Exercício 1 Roteiro 3
*/

#include <iostream.h>
#include <math.h>

int main()

{
    float menu,n1,n2,resultado;
    cout<<"Menu de opcoes: ";
    cout<<"\n 1-Somar dois numeros ";
    cout<<"\n 2-Raiz quadrada de numero ";
    cin>>menu;
    if (menu==1)
    {
               cout<<"\n Digite um numero: ";
               cin>>n1;
               cout<<"\n Digite outro numero: ";
               cin>>n2;
               resultado=n1+n2;
               cout<<"\n O resultado da soma dos numeros e = "<<resultado;
               }
    else if (menu==2)
               {
               cout<<"\n Digite um numero: ";
               cin>>n1;
                      if(n1<=0){
                          cout<<"\n Digite um numero maior que ZERO";
                                }
                      else
                      {
                          resultado=sqrt(n1);
                          cout<<"\n A raiz do numero digitado e = "<<resultado;
                                }
               }
    else
               {
                    cout<<"Opcao invalida!";
                    }
                    cout<<"\n";
                    system("PAUSE");
    }
