#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 5 octubre 2021
 * Ejemplo de concatenación de dos colas en una tercera
 */
int main() {
    queue <int> cola1, cola2, cola3;
    int n;

    cin >> n;
    //llenar cola1
    while (n>0){
        cola1.push(n);
        cin >> n;
    }

    cin >> n;
    //llenar cola2
    while (n>0){
        cola2.push(n);
        cin >> n;
    }

    //vaciar cola1 y agregarlo a cola3
    while (!cola1.empty()){
        cola3.push(cola1.front());
        cola1.pop();
    }

    //vaciar cola2 y agregarlo a cola3
    while (!cola2.empty()){
        cola3.push(cola2.front());
        cola2.pop();
    }

    //mostrar y vaciar cola3
    while (!cola3.empty()){
        cout << cola3.front() << " ";
        cola3.pop();
    }
    return 0;
}