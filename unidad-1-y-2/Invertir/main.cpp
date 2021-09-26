#include <bits/stdc++.h>

using namespace std;

int invertirNumero (int n, int m) {
    if(n < 10) return m+n;
    else {
        m= m+n%10;
        invertirNumero (n/10, m*10);
    }
}
int main()
{
    int n, invertido;
    cin >> n;
    invertido=invertirNumero (n,0);
    cout << invertido << endl;
    return 0;
}