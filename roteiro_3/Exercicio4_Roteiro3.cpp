/*Programador: Rafael Dória   
RA: 31318303
Data: 23/03/2013
Descrição : Exercício 4 Roteiro 3
*/

#include <iostream.h>
#include <math.h>

int main()

{ 
    float menu,salat,aum,saltot;
    cout<<"\n Digite o codigo corresponde ao cargo do funcionario: ";
    cout<<"\n 1 - Escrituario";
    cout<<"\n 2 - Secretario";
    cout<<"\n 3 - Caixa";
    cout<<"\n 4 - Gerente";
    cout<<"\n 5 - Diretor \n";
    cin>>menu;
    cout<<"\n Informe o salario atual do funcionario: ";  
    cin>>salat;
            
              if(menu==1)
              {       
                      aum=(salat/100)*50;
                      saltot=salat+aum;
                      cout<<"\n O Escritorio, ";
                      cout<<" recebeu aumento no valor de R$ "<<aum;
                      cout<<", e seu salario agora e igual a R$ "<<saltot;
              }
              else if(menu==2)
              {
                         aum=(salat/100)*35;
                         saltot=salat+aum;
                         cout<<"\n O secretario, ";
                         cout<<" recebeu aumento no valor de R$ "<<aum;
                         cout<<", e seu salario agora e igual a R$ "<<saltot;
              }
              else if(menu==3)
              {
                         aum=(salat/100)*20;
                         saltot=salat+aum;
                         cout<<"\n O caixa, ";
                         cout<<" recebeu aumento no valor de R$ "<<aum;
                         cout<<", e seu salario agora e igual a R$ "<<saltot;
              }
              else if(menu==4)
              {
                         aum=(salat/100)*20;
                         saltot=salat+aum;
                         cout<<"\n O gerente, ";
                         cout<<" recebeu aumento no valor de R$ "<<aum;
                         cout<<", e seu salario agora e igual a R$ "<<saltot;
              }
              else if(menu==5)
              {
                         cout<<"\n O diretor nao tem aumento! ";
              }
              else
              {
                  cout<<"\n Opcao invalida! ";
                  }
              
              cout<<"\n";
              system("PAUSE");
}
                         
