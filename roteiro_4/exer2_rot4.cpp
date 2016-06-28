/* 
Programador: Rafael Dória   
Data: 12/04/2013
Descrição: Exercício 2 Roteiro 4
*/

#include <iostream.h>
int main()
{
   float idade,pri,seg,ter,qua,qui,porpri,quipor;
   for(int i=1;i<=8;i++)
   {
     cout<<"Informe a idade: ";
     cin>>idade;
                if(idade<=15)
                { pri++;}
                else if(idade>= 16 and idade<=30)
                { seg++; }
                else if(idade>=31 and idade<=45)
                { ter++; }
                else if(idade>=46 and idade<=60)
                { qua++; }
                else 
                { qui++; }
     }
     porpri=(pri*100)/8;
     quipor=(qui*100)/8;
     cout<<"\n Total de pessoas faixa etaria 1: "<<pri;
     cout<<"\n Total de pessoas faixa etaria 2: "<<seg;
     cout<<"\n Total de pessoas faixa etaria 3: "<<ter;
     cout<<"\n Total de pessoas faixa etaria 4: "<<qua;
     cout<<"\n Total de pessoas faixa etaria 5: "<<qui;
     cout<<"\n Percentual de pessoas faixa etaria 1: "<<porpri;
     cout<<"\n Percentual de pessoas faixa etaria 2: "<<quipor;
     cout<<"\n";
     system("PAUSE");
}
     
     
