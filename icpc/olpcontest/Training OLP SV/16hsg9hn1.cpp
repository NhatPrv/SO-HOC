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
    long long ans = 1;
    for (long long i = a; i <= b; i++) {
        ans*=i;
        ans%=c;
    }
    cout << ans;

    return 0;
}