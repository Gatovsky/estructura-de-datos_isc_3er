#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 5 octubre 2021
 * Mostrar el alfabeto utilizando colas
 * v1
 */

int main() {
    queue<char> simbolos;
    int i;

    //agregar letras a la cola de a-z
    for(i='a'; i<='z'; i++){
        simbolos.push(i);
    }

    //mandar a imprimir las letras de la cola
    //la primera en entrar es la primera en salir
    while (!simbolos.empty()){
        cout << simbolos.front() << ' ';
        simbolos.pop();
    }

    return 0;
}