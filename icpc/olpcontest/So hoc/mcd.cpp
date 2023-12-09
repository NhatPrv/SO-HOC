#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

long long tongchuso(long long x) {
    long long ans = 0;
    while (x > 0) {
        ans += x%10;
        x/=10;
    }
    return ans;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long m, n;
    cin >> m >> n;

    vector<long long> ans;
    for (long long i = 1; i*i <= n; i++) {
        if (n%i==0) {
            if (i*i == n) ans.push_back(i);
            else {
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    long long result = 1;
    for (int i = 0; i<ans.size(); i++) {
        if (m % ans[i] == 0) result = max(result, tongchuso(ans[i]));
    }
    cout << result;
    return 0;
}