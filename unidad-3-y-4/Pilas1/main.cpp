#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 28 Septiembre
 * Ejemplo de ingresar y mostrar datos en una pila
 */

int main() {
    stack<unsigned int> pila1;
    unsigned int num;

    cin >> num;

    //agregar valores a la pila
    while (num > 0){
        pila1.push(num);
        cin >> num;
    }

    //retirar el valor de la pila
    while(!pila1.empty()){
        //top verifica que valor hay en la cima
        num=pila1.top();
        cout << num << endl;
        //pop retira el valor de la cima
        pila1.pop();
    }
    return 0;
}
