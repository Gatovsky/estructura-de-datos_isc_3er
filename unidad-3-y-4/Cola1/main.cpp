#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 5 octubre 2021
 * Ejemplo de ingresar y mostrar datos en una cola
 */

int main() {
    queue<unsigned int> cola1;
    unsigned int num;

    cin >> num;

    //agregar valores mayores a 0 a la cola
    while (num > 0){
        cola1.push(num);
        cin >> num;
    }

    //retirar el valor de la cola
    while(!cola1.empty()){
        //top verifica que valor hay en la cima
        num=cola1.front();
        cout << num << endl;
        //pop retira el valor de la cima
        cola1.pop();
    }
    return 0;
}