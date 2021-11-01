#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, nMayor=0, contador=0;
    list<int> nums, fn_nums;

    cin >> n;
    while (n>0){
        cin >> num;
        nums.push_back(num);
        n--;
    }

    //buscar mayor
    for(int i: nums){
        if( i >= nMayor) nMayor=i;
    }

    //quitar numero mayor
    for(int i: nums){
        if(i != nMayor){
            fn_nums.push_back(i);
            contador++;
        }
    }


    //imprimir valores
    cout << contador << endl;
    for(int i : fn_nums){
        cout << i << " ";
    }

    return 0;
}
