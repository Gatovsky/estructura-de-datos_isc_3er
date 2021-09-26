#include <bits/stdc++.h>
using namespace std;

int nNumeros(int n){
    if(n > 1){
        nNumeros(n-1);
    }
    cout << n << endl;
    return n;
}

int main() {
    int n;
    cin >> n;
    nNumeros(n);

    return 0;
}
