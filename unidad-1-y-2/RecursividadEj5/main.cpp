#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n);

long long fibonacci(int n){
    if(n==0 || n == 1) return 0;
    else if(n == 2) return 1;
    else return fibonacci(n-2)+ fibonacci(n-1);
}

int main() {
    int numero;
    cin >> numero;

    cout << fibonacci(numero);
    return 0;
}
