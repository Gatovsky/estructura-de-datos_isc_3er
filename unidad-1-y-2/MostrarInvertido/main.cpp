#include <bits/stdc++.h>
using namespace std;

void MostrarInvertido(int numero);

int main() {
    int numero;
    cin >> numero;
    MostrarInvertido(numero);
    return 0;
}

void MostrarInvertido(int numero) {

    cout << numero%10;
    if(numero>10) MostrarInvertido(numero/10);
}