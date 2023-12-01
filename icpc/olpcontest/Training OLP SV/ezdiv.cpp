#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    if (x > a[n-1]) {
        cout << a[0] * ceil((double)x/a[0]);
    } else {
        auto it = lower_bound(a.begin(), a.end(), x);
        cout << *it;
    }
    return 0;
}