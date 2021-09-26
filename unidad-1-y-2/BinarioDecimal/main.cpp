#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(string binario, int position, int potencia);

int BinaryToDecimal(string binario, int position, int potencia){
    if(position == 0) return (binario[position]-48)*potencia;
    else return (binario[0]-48)*potencia + BinaryToDecimal(binario, position - 1, potencia * 2);

}

int main() {
    string binario=" ";
    //int position = binario.length()-1;
    int potencia = 1;
    cin >> binario;
    cout << BinaryToDecimal(binario, binario.length() - 1, potencia);
    return 0;
}