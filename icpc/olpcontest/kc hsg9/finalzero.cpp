#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("CHUSO1.INP", "r", stdin);
    freopen("CHUSO1.OUT", "w", stdout);

    long long n;    cin >> n;
    long long dem = 0;
    long long x = 1;
    for (int i=2; i<=n; i++) {
        x*=i;
        while (x % 10 == 0) {
            dem++;
            x/=10;
        }
    }
    cout << dem;
    return 0;
}