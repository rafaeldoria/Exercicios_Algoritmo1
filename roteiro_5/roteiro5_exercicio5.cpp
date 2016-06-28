/* 
Programador : Rafael D?ria
Data: 23/05/2013
Descri??o: Roteiro 5 Exercicio 5
*/
#include <iostream.h>
int main()
{ int dec[10],ord;
  for(int i=0;i<10;i++)
  { cout<<"Informe um numero: ";
    cin>>dec[i];}
  
  for(int i=0;i<10;i++)
          for(int j=i+1;j<10;j++)
          { if (dec[i]<dec[j])
            {ord=dec[i];
             dec[i]=dec[j];
             dec[j]=ord;
            }
            }
  for(int i=0;i<10;i++)
  {cout<<dec[i]<<", ";}
   cout<<"\n";
          system("pause");
}
