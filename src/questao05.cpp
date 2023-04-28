#include <iostream>

using namespace std;

int main(){
	int idade, cont;
	char fim = 'n';
	while(fim != 's'){
		cout << "insira a idade do aluno: ";
		cin >> idade;
		cout << "Voce nos informou a idade de todos os alunos? ";
		cin >> fim;
		if(idade <= 25){
			cont++;
		}
	}
	cout << "O total de alunos que possuem (25-) eh: " << cont << endl;
	return 0;
}
