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
    double r, h;
    
    cout<<"insira o raio: ";
    cin>>r;
   
    cout<<"insira a altura: ";
    cin>>h;
   
    double areadocilindro=(2*3.14*r*r)+(2*3.14*r*h);
    cout<<"\nárea do cilindro: "<<areadocilindro;
   
   //QUANTOS LITROS é NECESSARIO
   double litros;
   litros=areadocilindro/3;
   cout<<"\nLitros necessários: "<<litros;
   
   double quantaslatas=litros/5;
   quantaslatas=ceil(quantaslatas);
   cout<<"\nLatas necessárias: "<<quantaslatas;
   
   cout<<"\nCADA LATA  CUSTA 50tao";
   double valor=quantaslatas*50;
   cout<<"\nvalor: R$$"<<valor;
   

    return 0;
}