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
    
    
    bool chuva=1;
    bool nublado=0;
   
    bool e = chuva && nublado;
    cout<<"\nchuva. VALOR ="<<chuva;
    cout<<"\nnublado. VALOR ="<<nublado;
    cout<<"\nhoje está chovendo e hoje está sol. VALOR ="<<e;
    
    cout<<"\n";
    cout<<"\n DISJUNÇÃO";
    
    bool ou=chuva||nublado;
    cout<<"\nchuva. VALOR ="<<chuva;
    cout<<"\nnublado. VALOR ="<<nublado;
    cout<<"\nhoje está chovendo e hoje está sol. VALOR ="<<ou;
    
    return 0;
}