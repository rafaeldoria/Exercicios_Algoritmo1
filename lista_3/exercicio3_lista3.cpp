/*
Programador : Rafael Dória
Data : 10/05/2013
Descrição : exercicio 3 lista 3
*/

#include <iostream.h>

int main()

{
  int number=0,primo=0;
  char s;
  while(number!=-1)
  {
  
  cout<<"Digite um numero maior que 1 (-1 para sair)";
  cin>>number;
  primo=0; 
  if (number>1)   
  {for(int i=1;i<=number;i++)
   { if((number%i)==0)
      {primo=primo+1;}
   }
   if(primo==2)
   {cout<<"Numero informado primo!";}
   else 
   {cout<<"Numero informado nao e primo!";}
   cout<<"\n";  
   }   
  else if (number <=0 and number!=-1)  
  {cout<<"Opcao invalida!";}  
  
}
  system("PAUSE");
}
    
