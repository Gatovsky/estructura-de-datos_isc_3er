#include <bits/stdc++.h>
using namespace std;

void burbujitaMax2Min(int array[], const int lon){
    int aux=0;
    for(int i=0; i<lon;i++){
        for(int j=0; j<lon; j++){
            if(array[i] > array[j]){
                aux= array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

void burbujitaMin2Max(int array[], const int lon){
    int aux=0;
    for(int i=lon-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(array[j] > array[j+1]){
                aux= array[j];
                array[j]= array[j+1];
                array[j+1]= aux;
            }
        }
    }
}

int main() {
    int array[] = {6,3,8,4,5,2},  array2[] = {6,3,8,4,5,2};
    int lon= sizeof array/ sizeof array[0];
    //string a[] = {"1d", "ttr", "trrree", "887"};

    burbujitaMax2Min(array, lon);
    burbujitaMin2Max(array2, lon);

    for(auto i: array){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: array2){
        cout << i << " ";
    }

    return 0;
}
