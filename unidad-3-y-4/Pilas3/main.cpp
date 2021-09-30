#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 29 Septiembre
 * Mostrar tabla ascii usando una pila
 * v2
 */

int main() {
    stack<char> simbolos;
    int i;

    //agregar letras a la pila de A-Z
    for(i=255; i>=0; i--){
        simbolos.push(i);
    }

    //mandar a imprimir las letras de la pila
    //la última en entrar es la última en salir
    while (!simbolos.empty()){
        cout << simbolos.top() << ' ';
        simbolos.pop();
    }

    return 0;
}
