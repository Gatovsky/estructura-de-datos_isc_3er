#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 6 octubre 2021
 * Ejimplificación de las colas de prioridad
 */

void menu(){
    cout << "**Colas de Prioridad**\n";
    cout << "1. Encolar\n";
    cout << "2. Desencolar\n";
    cout << "3. Examinar\n";
    cout << "4. Longitud\n";
    cout << "5. Salir\n";
    cout << "Elige una opción: ";

}

int main() {

    priority_queue <int> colap;
    int numero, opcion;

    do{
        menu();
        cin >> opcion;

        switch (opcion) {

            case 1:
                cin>>numero;
                colap.push(numero);
                break;
            case 2:
                if(!colap.empty()) colap.pop();
                break;
            case 3:
                if(!colap.empty()) cout << "Dato: " << colap.top() << endl;
                break;
            case 4:
                cout << "Longitud: " << colap.size() << endl;
                break;
            default:
                break;

        }
    } while (opcion!=5);

    return 0;
}
