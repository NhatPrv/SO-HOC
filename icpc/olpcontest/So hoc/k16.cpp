#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;  cin >> t;
    while (t--) {
        long long n;    cin >> n;
        int ans = 0;
        for (int i = 1; i*i <= n; i++) {
            if (n % i == 0) {
                if (i%2 == 0) ans++;
                if ((n/i) % 2 == 0) ans++;
                if (i * i == n && i % 2 == 0) ans--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}