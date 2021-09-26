#include <bits/stdc++.h>
using namespace std;

class Persona{
private:
    string nombre;
    char  inicial;
    int   edad;
    float calif;

public:
    Persona(string n, char i, int e, float c){
        nombre=n;
        inicial=i;
        edad=e;
        calif=c;
    }
    void setNombre(string n) {nombre=n;}
    void setInicial(char in) {inicial=in;}
    void setEdad(int e) {edad=e;}
    void setCalif(float c) {calif=c;}

    string getNombre() {return nombre;}
    char getInicial() {return inicial;}
    int getEdad() {return edad;}
    float getCalif() {return calif;}

} ;

int main() {


    string n;
    char i;
    int e;
    float c;

    cin >> n >> i >> e >> c;
    Persona per1(n, i, e, c);

/*    per1.setNombre(p);
    per1.setInicial(i);
    per1.setEdad(e);
    per1.setCalif(c);
*/
    cout << "Nombre: " << per1.getNombre() << '\n';
    cout << "Inicial: " << per1.getInicial() << '\n';
    cout << "Calificación: " << per1.getCalif() << endl;
    cout << "Edad: " << per1.getEdad();

    return 0;
}