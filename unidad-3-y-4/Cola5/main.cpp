#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 5 octubre 2021
 * Mostrar tabla ascii usando una cola
 * v2
 */

int main() {
    queue<char> simbolos;
    int i;

    //agregar letras a la cola de A-Z
    for(i=255; i>=0; i--){
        simbolos.push(i);
    }

    //mandar a imprimir las letras de la cola
    while (!simbolos.empty()){
        cout << simbolos.front() << ' ';
        simbolos.pop();
    }

    return 0;
}