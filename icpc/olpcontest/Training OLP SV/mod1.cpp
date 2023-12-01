#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, c;  
    cin >> a >> b >> c;
    cout << (a + b) % c << " ";
    if (a - b < 0) cout << ((a-b)) % c  + c<< " ";
    else cout << (a - b) % c << " ";
    cout << (a%c * b%c) % c;

    return 0;
}