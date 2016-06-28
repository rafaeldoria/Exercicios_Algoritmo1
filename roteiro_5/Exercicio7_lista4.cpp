/* 
Programador : Rafael Dória
Data: 23/05/2013
Descrição: Lista 4 Exercício 7
*/

#include <iostream.h>
int main()
{ int peso,maior,menor,set=0;
  float media,soma=0;
      for(int i=0;i<30;i++)
      {cout<<"Informe peso do aluno: ";
       cin>>peso;
       if(i==0)
       {maior=peso;
       menor=peso;}       
       if(peso>70)
       {set++;}
       if(peso>maior)
       {maior=peso;}
       if(peso<menor)
       {menor=peso;}
       soma+=peso;
       }
       media=soma/30;
       cout<<"Total de alunos acima de 70kg: "<<set<<"\n";
       cout<<"Media de peso: "<<media<<"\n";
       cout<<"Peso aluno mais gordo: "<<maior<<"\n";
       cout<<"Peso aluno mais magro: "<<menor<<"\n";
       system("pause");
    }
