#include <bits/stdc++.h>
using namespace std;

struct persona{
        string nombre;
        char  inicial{};
        int   edad{};
        float calif{};
};

int main() {
    persona p;

    cin >> p.nombre >> p.inicial >> p.edad >> p.calif;
    cout << "Nombre: " << p.nombre << '\n';
    cout << "Inicial: " << p.inicial << '\n';
    cout << "Edad: " << p.edad << '\n';
    cout << "Calificación: " << p.calif << endl;

    return 0;
}