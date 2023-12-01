#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

const long long add = 1e9+1;

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    map<long long, int> count;
    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        count[x+add]++;
    }
    cout << count.size();
    return 0;
}  