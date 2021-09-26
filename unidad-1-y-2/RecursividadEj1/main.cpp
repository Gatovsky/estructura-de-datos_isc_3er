#include <bits/stdc++.h>
using namespace std;

long long sumaEnteros(int n){
    if(n == 1) return 1;
    else if(n==0) return 0;

    return sumaEnteros(n-1)+n;;
}

int main() {
    int n;
    long long resultado;
    cin >> n;
    resultado=sumaEnteros(n);

    cout << resultado;
    return 0;
}
