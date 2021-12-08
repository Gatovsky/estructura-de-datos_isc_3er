#include<bits/stdc++.h>
//ordenar precios
/*
8
axion 23.60
fud 23.00
LaLa 23.01
Petalo 129.5
2Kg_manzanas 58.6
BimboG 30.5
MayonesaM 50.5
Colgate 23
 */
using namespace std;

int main(){
    int N;
    double precio, T_compras, aux=0.00;
    string nombre, aux_nombre;
    cin >> N;

    string array_nombre[N];
    double array_precio[N];
    int linea = 1;

    for(int i=0; i<N; i++){
        cin >> nombre >> precio;
        array_nombre[i]= nombre;
        array_precio[i] = precio;
    }

    for(int i=N-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(array_precio[j]<= array_precio[j+1]){
                aux=array_precio[j];
                aux_nombre = array_nombre[j];
                array_precio[j] = array_precio[j+1];
                array_nombre[j] = array_nombre[j+1];
                array_precio[j+1] = aux;
                array_nombre[j+1]= aux_nombre;
            }
        }
    }

    for(int i=0; i<N; i++){
        cout << linea++ << " | " << array_nombre[i] << " | " << array_precio[i] << endl;
        T_compras+= array_precio[i];
    }

    cout << endl;
    cout << T_compras;

    return 0;
}