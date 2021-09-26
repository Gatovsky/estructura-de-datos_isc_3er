#include <bits/stdc++.h>
using namespace std;

bool Palindromo(string palabra, int i, int j);

int main() {
    string palabra = " ";
    bool b;

    cin >> palabra;
    b= Palindromo(palabra, 0, palabra.length()-1);

    if(b) cout << " es palíndromo" << endl;
    else cout << " no es palíndromo" << endl;
    return 0;
}

bool Palindromo(string palabra, int i, int j){
    if ( i > j) return  true;
    else if (palabra[i] != palabra[j]) return false;
    else return Palindromo(palabra, i+j, j-1);
}