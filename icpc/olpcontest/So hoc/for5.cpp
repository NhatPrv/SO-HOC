#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    if (n <= 1) cout << "NO";
    long long ans = 0;
    for (long long i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ans += i;
            ans += n/i;
        }
        if (i * i == n) ans -= i;
    }
    if (n * 2 == ans) cout << "YES";
    else cout << "NO";

    return 0;
}