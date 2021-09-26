#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f0=0, f1=1, aux, r=0, a, b;
    cin >> a >> b;
    while(f1 != a){
        aux=f0+f1;
        f0=f1;
        f1=aux;
    }
    while(f1 != b){
        r++;
        aux=f0+f1;
        f0=f1;
        f1=aux;
    }
    r--;
    cout << r;
    return 0;
}