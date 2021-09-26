#include <bits/stdc++.h>
using namespace std;

struct fechaNacimiento {
    int  dia;
    int  mes;
    int  anio;
};

struct datosPersona {
    string nombre;
    char  inicial{};
    struct fechaNacimiento fn{};
    float calif{};
};

int main() {
    datosPersona persona;

    cin >> persona.nombre >> persona.inicial >> persona.fn.dia >> persona.fn.mes >> persona.fn.anio >> persona.calif;
    cout << "Año nacimiento: " << persona.fn.anio << '\n';
    cout << "Calificación: " << persona.calif;

    return 0;
}
