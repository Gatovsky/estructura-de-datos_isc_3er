#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 28 Septiembre
 * Ejemplo de sumar los datos en una pila
 */

int main() {
    stack<unsigned int> pila1;
    unsigned int num, suma=0;

    cin >> num;

    //agregar valores a la pila
    while (num > 0){
        pila1.push(num);
        cin >> num;
    }

    //sumar los valores de la pila
    while(!pila1.empty()){
        //top verifica que valor hay en la cima
        num=pila1.top();
        suma += num;
        //pop retira el valor de la cima
        pila1.pop();
    }

    cout << suma << endl;
    return 0;
}
