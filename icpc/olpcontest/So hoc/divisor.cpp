#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    long long cnt = 0;
    long long sum = 0;
    for (long long i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            cnt += 2;
            sum += i;
            sum += n/i;
        }
        if (i * i == n) {
            cnt--;
            sum-=i;
        }
    }
    cout << cnt << " " << sum;

    return 0;
}