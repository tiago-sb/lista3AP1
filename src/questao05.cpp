#include <iostream>

using namespace std;

int main(){
	int i, c;
	char s = 'n';
	while(s != 's'){
		cout << "insira a idade do aluno: ";
		cin >> i;
		cout << "Voce nos informou a idade de todos os alunos? ";
		cin >> s;
		if(i >= 25){
			c++;
		}
	}
	cout << "O total de alunos que possuem (25+) eh: " << c << endl;
	return 0;
}
