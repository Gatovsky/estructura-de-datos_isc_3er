#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 5 octubre 2021
 * Mostrar el alfabeto utilizando colas
 * v2
 */

int main() {
    queue<char> simbolos;
    int i;

    //agregar letras a la cola de A-Z
    for(i=65; i<=90; i++){
        simbolos.push(i);
    }

    //mandar a imprimir las letras de la cola
    while (!simbolos.empty()){
        cout << simbolos.front() << ' ';
        simbolos.pop();
    }

    return 0;
}