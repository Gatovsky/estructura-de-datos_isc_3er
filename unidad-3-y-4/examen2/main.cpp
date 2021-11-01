#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> pila;
    int instancias, numero, instruccion;

    cin >> instancias;
    while (instancias >0){
        cin >> instruccion;

        switch (instruccion) {
            case 1:
                cin >> numero;
                pila.push(numero);
                break;
            case 2:
                if(!pila.empty())
                    cout << pila.top() << endl;
                pila.pop();
                break;
            case 3:
                cout << pila.size() << endl;
            default:break;
        }
        instancias--;
    }

    return 0;
}
