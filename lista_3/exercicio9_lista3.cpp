/* 
Programador: Rafael Dória   
Data: 12/04/2013
Descrição: Exercício 9 Lista 3
*/

#include <iostream.h>
int main()

{
    float nota1,nota2,media,apr,exa,rep,mediacl;
    apr=0;
    rep=0;
    exa=0;
    for (int i=1;i<=6;i++)
        
        { cout<<"Informe a primeira nota do aluno: ";
          cin>>nota1;
          cout<<"Informe a segunda nota do aluno: ";
          cin>>nota2;
          
          media=(nota1+nota2)/2;
          mediacl=mediacl+media;
          if (media<3)
             { cout<<"Reprovado ";
               cout<<"\n";
               rep++;
             }
          else if (media>=3 and media<=7)
             { cout<<"Exame ";
               cout<<"\n";
               exa++;
             }
          else
             { cout<<"Aprovado ";
               cout<<"\n";
               apr++;
             }
          }
          mediacl=mediacl/6;
          cout<<"Total de aprovados: "<<apr;
          cout<<"Total de reprovados: "<<rep;
          cout<<"Total em exame: "<<exa;
          cout<<"Media da turma: "<<mediacl;
          cout<<"\n";
          system("PAUSE");
}
