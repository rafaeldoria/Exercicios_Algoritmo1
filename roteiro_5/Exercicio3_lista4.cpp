/* 
Programador : Rafael Dória
Data: 23/05/2013
Descrição: Lista 4 Exercício 3
*/

#include <iostream.h>
#include <math.h>
int main()
{ int cinqa[50],cinqb[50],result[50],valor;
  for (int i=0;i<50;i++)
      {cout<<"Informe o valor de A: ";
      cin>>valor;
      cinqa[i]=valor;
      }
      
  for (int i=0;i<50;i++) 
      {cout<<"Informe o valor de B: ";
      cin>>valor;
      cinqb[i]=valor;
      }
      
      cout<<"\n";
  for (int i=0,j=49;i<50;i++,j--)
      {result[i]=cinqa[i]-cinqb[j];}
      cout<<"Em sequencia,subtracao de primeiros A por ultimos B: "<<"\n";
  for (int i=0;i<50;i++)
      {cout<<result[i]<<" |";}  
      cout<<"\n";  
      system("pause");
}
