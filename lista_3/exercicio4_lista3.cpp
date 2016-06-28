/* 
Programador: Rafael Dória   
Data: 12/04/2013
Descrição: Exercício 2 Roteiro 4
*/

#include <iostream.h>
int main()
{
   int ant2,ant1,fib,t;
 cout<<"Informe termo que deseja na logica de fibonacci: ";
    cin>>t;
    ant2=0;
    ant1=1;
    if (t==1)
    { cout<<"Valor = 1";
    }
    else if(t==2)
    { cout<<"Valor = 2";
    }
    else if(t>2)
      {
      for (int i=3;i<t; ++i)
      {
      fib=ant2+ant1;    
      ant2=ant1;
      ant1=fib; 
      }
      cout<<"Valor = "<<fib;
      }
      
      cout<<"\n";
      system("PAUSE");
}
    
    
    
