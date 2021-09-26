#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 0) return 0;
    if(n==1 || n==2) return 1;
    return fibonacci(n-1)+ fibonacci(n-2);

}

int main() {

    int n, a, b, cantidadNumeros=0;
    ///cin >> n;
    cin >> a >> b;
    n=b;
    for(int i=0; i <=n ; i++){
        //cout<< fibonacci(i) << " ";
        int numFibo = fibonacci(i);
        if( numFibo > a && numFibo < b){
            cantidadNumeros+=1;
        }
    }
    cout << endl;
    cout << cantidadNumeros;

    return 0;
}
