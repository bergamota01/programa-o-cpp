/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
   cout<<"Calculado de Aprovação";
   cout<<"\n---------------------"<<endl;
   
   int b1, b2, b3, ma;
   
   cout<<"Digite a nota de b1"<<endl;
   cin>>b1;
   cout<<"Digite a nota de b2"<<endl;
   cin>>b2;
   cout<<"Digite a nota de b3"<<endl;
   cin>>b3;
   
  
   if(b1>=0 && b1<=100 && b2>=0 && b2<=100 && b3>=0 && b3<=100){
        ma=(b1+b2+b3)/3;
   
   cout<<"a média é "<<ma<< endl;
   
   if (ma >=70){
        cout<<"o aluno foi aprovado"<<endl;
        
   }else {cout<<"o aluno foi reprovado"<<endl;

   }
   }else {cout<<"notas absurdas..."<<endl;
}
   
   
   cout<<"Obrigado por usar nosso sistema!"<<endl;
   
   
  
    return 0;
}