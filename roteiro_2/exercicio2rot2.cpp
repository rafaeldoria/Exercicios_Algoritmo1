/*
Programador: Rafael Dória
Data: 10/03/2013
Descrição: exercício 2, Roteiro 2
*/

# include <iostream.h>
# include <math.h>

int main()

{
    float n1,n2,n3;
    cout<< "Digite 1 numero do teclado ";
    cin>>n1;
    cout<< "Digite um segundo numero ";
    cin>>n2;
    cout<< "Digite um terceiro numero ";
    cin>>n3;
            n1=pow(n1,3);
            n2=3*n2;
            n3=sqrt(n3);
            
    cout<< "O cubo do primeiro numero = "<<n1;
    cout<< "\n O triplo do segundo numero = "<<n2; 
    cout<< "\n Raiz quadrada do terceiro numero = "<<n3;
    cout<< "\n";
    
    system("PAUSE");
} 
    
