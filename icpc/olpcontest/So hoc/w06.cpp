#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long m, n; cin >> m >> n;
    for (long long i = 1; (i*i <= m || i * i <= n), (i <=n && i<=m); i++) {
        if (m%i==0 && n%i==0) cout << i << " ";
    }

    return 0;
}