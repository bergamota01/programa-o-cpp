#include <iostream>
using namespace std;
#include <cmath>
#include <string>

int main()
{
	cout<<"Programa para verificar as notas dos alunos 2CPM (parciais)"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	int alunosa=0;
	int alunosr=0;
	int faltas=0;
	int n1;
	int n2;
	int res;
	int continuar;
	
	//NOTA 1

	
	teste:
    cout<<"Digite o valor da nota 1: ";
    cin>>n1;
    if(n1>35 || n1<0){
    	cout<<"nota absurda"<<endl;
    	goto teste;
	}
	//NOTA 2
	teste2:
    cout<<"Digite o valor da nota 2: ";
    cin>>n2;
     if(n2>35 || n2<0){
    	cout<<"nota absurda"<<endl;
    	goto teste2;
    }
    
    //FALTAS
	FALTAS:
    cout<<"Digite o valor das faltas: ";
    cin>>faltas;
     if(faltas>70 || faltas<0){
    	cout<<"faltas absurdas"<<endl;
    	goto FALTAS;

    }
	
	//SOMA
	res=n1+n2;
     
    if(res>=42){
        if(faltas<=20)
	cout<<"aluno aprovado, nota: "<<res<<endl;
	alunosa++;
    }
	else{
		cout<<"aluno de recuperacao, nota: "<<res<<endl;
		alunosr++;
	}
	
	
    cout<<"Continuar??? sim=1 nao=0"<<endl;
    cin>>continuar;
	if(continuar==1){
	goto teste;
	}else{
		cout<<"alunos aprovados: "<<alunosa<<endl;
		cout<<"alunos de recuperacao: "<<alunosr<<endl;
		cout<<"faltas: "<<faltas<<endl;
		cout<<"Obrigado por usar este programa (:";
	}
	
	
    
    
    
    
    
    return 0;
}