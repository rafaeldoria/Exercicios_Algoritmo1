/*
Programador : Rafael Dória
Data: 04/03/2013
Descrição: exercício 1, roteiro 2
*/

#include<iostream.h>
#include<math.h>

int main()

{
    float a,b,c,delta,x,x1,x2;
    cout<<"Digite o valor de a da equacao do segundo grau";
    cin>>a;
    cout<<"Digite o valor de b da equacao";
    cin>>b;
    cout<<"Digite o valor de c";
    cin>>c;
    if(a==0)
    { cout<<"Nao e equacao";
    }
                 else
                 {                 
                 delta=(pow(b,2))-4*a*c;
                 if (delta<0)
                 { cout<<"Nao existe raizes reais";
                  }
                   else if(delta==0)
                   { x=-b/(2*a);
                   }
                   else
                   {     x1= (-b +sqrt(delta)) /(2*(a));
                         x2= (-b -sqrt(delta)) /(2*(a));
                 }  
                 }                 
                   cout<<"O valor de x1 = "<<x1;
                   cout<<"E o valor de x2 = "<<x2; 
                                              
                   
                   system("PAUSE");
}
