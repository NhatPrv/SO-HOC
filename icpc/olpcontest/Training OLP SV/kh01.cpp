#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

bool check (long long n) {
    long long temp = sqrt(n);
    if (temp*temp == n) return true;
    return false;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    sort(a.begin(), a.end(), greater<long long>());
    for (long long x : a) {
        if (!check(x)) {
            cout << x;
            return 0;
        }
    }

    return 0;
}