#include <bits/stdc++.h>
using namespace std;

struct {
    string nombre;
    char  inicial{};
    int   edad{};
    float calif{};
} persona;

int main() {

    cin >> persona.nombre >> persona.inicial >> persona.edad >> persona.calif;
    cout << "Nombre: " << persona.nombre << '\n';
    cout << "Inicial: " << persona.inicial << '\n';
    cout << "Edad: " << persona.edad << '\n';
    cout << "Calificación: " << persona.calif << endl;

    return 0;
}