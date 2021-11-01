#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 5 octubre 2021
 * Ejemplo de sumar los datos en una cola
 */

int main() {
    queue<unsigned int> cola1;
    unsigned int num, suma=0;

    cin >> num;

    //agregar valores a la cola
    while (num > 0){
        cola1.push(num);
        cin >> num;
    }

    //sumar los valores de la cola
    while(!cola1.empty()){
        //top verifica que valor hay en el frente
        num=cola1.front();
        suma += num;
        //pop retira el valor del frente
        cola1.pop();
    }

    cout << suma << endl;
    return 0;
}