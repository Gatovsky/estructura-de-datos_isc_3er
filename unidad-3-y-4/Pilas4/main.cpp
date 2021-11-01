#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 30 septiembre 2021
 * Ejemplo de concatenación de dos pilas en una tercera
 */
int main() {
    stack <int> pila1, pila2, pila3;
    int n;

    cin >> n;
    //llenar pila1
    while (n>0){
        pila1.push(n);
        cin >> n;
    }

    cin >> n;
    //llenar pila2
    while (n>0){
        pila2.push(n);
        cin >> n;
    }

    //vaciar pila1 y agregarlo a pila3
    while (!pila1.empty()){
        pila3.push(pila1.top());
        pila1.pop();
    }

    //vaciar pila2 y agregarlo a pila3
    while (!pila2.empty()){
        pila3.push(pila2.top());
        pila2.pop();
    }

    //mostrar y vaciar pila3
    while (!pila3.empty()){
        cout << pila3.top() <<" ";
        pila3.pop();
    }
    return 0;
}
