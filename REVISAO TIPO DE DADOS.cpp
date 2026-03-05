/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
 using namespace std;
int main()
{
   double x=10;
   double y=20;
   double divisao = x/y;
   
   cout<<"OPERADORES ARISTMÉTICOS";
  
   cout<<"\n\nvalor de x+y é "<<x+y;
   cout<<"\nvalor de x-y é "<<x-y;
   cout<<"\nvalor de x*y é "<<x*y;
   cout<<"\nvalor de x/y é "<<divisao;
    
    cout<<"\n\nOPERADORES LÓGICOS";
    bool menor = x<y;
    bool maior = x>y;
    bool igual = x==y;
    bool diferente = x!=y;
    cout<<"\n\n Valor de x<y é "<<menor;
    cout<<"\n Valor de x>y é "<<maior;
    cout<<"\n Valor de x=y é "<<igual;
    cout<<"\n Valor de x!=y é "<<diferente;
    return 0;
}