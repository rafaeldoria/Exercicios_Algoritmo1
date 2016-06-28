/* 
Programador: Rafael Dória
Data: 28/04/2013
Descrição: Exercício 5 Roteiro 4
*/

#include <iostream.h>
int main()
{
    float cand1=0,cand2=0,cand3=0,cand4=0,nulo=0,branco=0,total=-1,pbranco=0,opcao;
    
    do
    {
     cout<<"Informe codigo do candidato: (0 para terminar) ";
     cin>>opcao;
     if(opcao==1)
     {cand1++;}
     else if(opcao==2)
     {cand2++;}
     else if(opcao==3)
     {cand3++;}
     else if(opcao==4)
     {cand4++;} 
     else if(opcao==5)
     {nulo++;}
     else if(opcao==6)
     {branco++;}     
     else
     {cout<<"Voto invalido.";
     cout<<"\n";}  
     total++; 
     }while(opcao!=0);
     pbranco=(branco*100)/total;
     cout<<"\n Total de votos candidato 1: "<<cand1;
     cout<<"\n Total de votos candidato 2: "<<cand2;
     cout<<"\n Total de votos candidato 3: "<<cand3;
     cout<<"\n Total de votos candidato 4: "<<cand4;
     cout<<"\n Total de votos nulos: "<<nulo;
     cout<<"\n Porcentagem votos brancos: "<<pbranco;
     cout<<"\n";
     system("PAUSE");
    }
    
