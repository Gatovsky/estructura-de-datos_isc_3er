#include <bits/stdc++.h>
using namespace std;

int main() {
    //list<int> filaCine;
    //list<int>::iterator it;
    int cantidadPersonas=1, I, totalTiempo=0, largoMax=0;

    cin >> I;

    while(I!=-1){
        totalTiempo+=I;
        cantidadPersonas+=I;
        cout << "cP: "<<cantidadPersonas << endl;
        cantidadPersonas--;
        cout << "cP--: "<< cantidadPersonas << endl;
        largoMax=max(largoMax, cantidadPersonas);
        cin >> I;
    }

    cout << totalTiempo << " " << largoMax;
    return 0;
}