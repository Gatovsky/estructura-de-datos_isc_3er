#include <bits/stdc++.h>
using namespace std;

long long factorial(int n);

long long factorial(int n){
    if(n == 0 || n == 1)return 1;
    else return n* factorial(n-1);
}

int main() {
    int numero;

    cin >> numero;

    cout << factorial(numero);
    return 0;
}
