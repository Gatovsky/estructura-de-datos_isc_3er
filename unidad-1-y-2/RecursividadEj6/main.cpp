#include <bits/stdc++.h>
using namespace std;

string DecimalToBinary(int decimal);

string DecimalToBinary(int decimal){
    string binario;
    if(decimal > 0){
        binario = DecimalToBinary(decimal / 2) + (char)(decimal % 2 +48);
    }
    return binario;
}

int main() {
    int decimal;
    cin >> decimal;
    cout << DecimalToBinary(decimal);
    return 0;
}
