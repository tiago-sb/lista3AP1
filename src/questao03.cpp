#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int v, a = 0, b = 1, aux;
    cout << "Insira um valor: ";
    cin >> v;
    for(int i = 0;i < v;i++){
        aux = a + b;
        a = b;
        b = aux;
    }
    cout << "sequência de Fibonnachi na posicao " << v << " é: " << aux << endl;
    return 0;
}
