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
        int n;  cin >> n;
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        int ans = 0;
        for (int i = 1; i*i<=n; i++) {
            if (n % i == 0) {
                ans+=2;
                if (i*i==n) ans--;
            }
        }
        if (ans&1) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}