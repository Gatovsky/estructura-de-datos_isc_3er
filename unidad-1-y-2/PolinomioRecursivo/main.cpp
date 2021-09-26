#include <bits/stdc++.h>
using namespace std;

int numLlamadas=0;
int binomial(int n, int k){
    numLlamadas++;
    if(k==0 || n==k) return 1;
    else return binomial(n-1, k)+binomial(n-1, k-1);
}

int main()
{
    int n, k, br;
    cin >> n >> k;
    br=binomial(n, k);
    cout << br <<' ' << numLlamadas;
    return 0;
}