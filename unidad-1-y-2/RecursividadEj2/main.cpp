#include <bits/stdc++.h>
using namespace std;

long long ponetencia(int base, int exponente){
    if(exponente == 0) return 1;
    return base* ponetencia(base, exponente-1);
}

int main() {
    int base, exponente;
    long long pot;

    cin >> base >> exponente;
    pot=ponetencia(base, exponente);
    cout << pot;

    return 0;
}
