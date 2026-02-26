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
    cout<<"Calculadora de perímetro do triangulo"; //saída de dados

     //tipo inteiro
     int a;
     int b;
     int c;
     cout<<"\nDigite valor lado 1:";
     cin>>a;
     cout<<"\nDigite valor do lado 2:";
     cin>>b;
     cout<<"\nDigite valor do lado 3:";
     cin>>c;
     int perimetro =a+b+c;
     
     cout <<"\nPerímetro do triângulo = "<< perimetro;

    return 0;
}