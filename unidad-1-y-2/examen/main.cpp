#include <bits/stdc++.h>
using namespace std;


int main() {
    unsigned long auxiliar =1, numeroFib =0, inicio=1, limite=10;
    unsigned long a, b, c=0;

    cin >> a >> b;
    cin.ignore();

    //cin >> limite;
    if(limite >0) {
        for (inicio; inicio <= limite; inicio++) {
            //cout << numeroFib << endl;
            auxiliar += numeroFib;
            numeroFib = auxiliar - numeroFib;
            if(numeroFib > a && numeroFib < b){
                c+=1;
            }
        }
    }

    cout << c;
    return 0;
}

