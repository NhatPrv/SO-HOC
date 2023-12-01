#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    long long ans = 0;
    long long x = 5;
    while (x <= n) {
        ans += n/x;
        x*=5;
    }
    cout << ans << endl;

    return 0;
}