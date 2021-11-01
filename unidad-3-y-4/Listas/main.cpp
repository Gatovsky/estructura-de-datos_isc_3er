#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 12 octubre 2021
 * demostración del uso de la clase lista
 * parte 2
 */

void menu(){
    cout << "**Litas**\n";
    cout << "1. Agregar inicio\n";
    cout << "2. Agregar final\n";
    cout << "3. Eliminar inicio\n";
    cout << "4. Eliminar final\n";
    cout << "5. Mostrar inicio\n";
    cout << "6. Mostrar final\n";
    cout << "7. Longitud lista\n";
    cout << "8. Mostrar la lista ini-fin\n";
    cout << "9. Mostrar la lista fin-ini\n";
    cout << "10. Ordenar la lista\n";
    cout << "11. Insertar un elemento de la lista\n";
    cout << "12. Eliminar un elemento de la lista\n";
    cout << "13. Salir\n";

}

int main() {

    list <int> lista;
    list<int>::iterator it;
    int numero, opcion;

    menu();
    do{
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {

            case 1: //agregar inicio
                cin>>numero;
                lista.push_front(numero);
                break;
            case 2: //agregar final
                cin >> numero;
                lista.push_back(numero);
                break;
            case 3: //eliminar inicio
                if(!lista.empty()) lista.pop_front();
                break;
            case 4://eliminar al final
                if(!lista.empty()) lista.pop_back();
                break;
            case 5://mostrar inicio
                if(!lista.empty()) cout << lista.front() << endl;
                break;
            case 6://mostar final
                if(!lista.empty()) cout << lista.back() << endl;
                break;
            case 7://longitud lista
                cout << "tamaño de lista: " << lista.size() <<endl;
                break;
            case 8:
                it = lista.begin();

                while (it != lista.end()){
                    cout << *it << " ";
                    it++;
                }
                cout << endl;
                break;
            case 9:
                it = lista.end(); it--;

                while (it != lista.begin()){
                    cout << *it << " ";
                    it--;
                }
                cout << *it << endl;
                break;
            case 10:
                lista.sort();
                break;
            case 11:

                it = lista.begin();

                while (*it != 20 && it != lista.end()){
                    it++;
                }

                if(it != lista.end()){
                    int n;
                    cin >> n;
                    lista.insert(it, n);
                    cout << "se ha agregado " << n  << endl;
                }
                break;
            case 12:
                int elimina;

                cin >> elimina;

                lista.remove(elimina);
                break;
            default:
                break;
        }
    } while (opcion!=13);

    return 0;
}