#include <iostream>

using namespace std;

int main(){
    int v, a = 0, b = 1, aux = 1;
    cin >> v;
    for(int i = 0;i < v;i++){
        cout << aux << " ";
        aux = a + b;
        a = b;
        b = aux;
    }

    return 0;
}
