#include <bits/stdc++.h>

using namespace std;

struct datosPersona {
    string nombre;
    char  inicial{};
    int   edad{};
    float calif{};
};

int main() {
    datosPersona persona[5];

    for (int i=0; i<5; i++) {
        cout << "Ingresa nombre de la persona " << i << '\n';
        cin >> persona[i].nombre;
    }

    for (int i=0; i<5; i++)
        cout << "Nombre " << i << ": " << persona[i].nombre << '\n';

    return 0;
}