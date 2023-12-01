#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)
const long long MAX = 1000005;

vector<long long> demuoc(MAX);
void imp() {
    for (long long i = 2; i * i <= MAX; ++i) {
        for (long long j = i; j <= MAX; j += i) {
            demuoc[j]++;
        }
    }
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    imp();

    int t;  cin >> t;
    while (t--) {
        long long n;    cin >> n;
        cout << demuoc[n]+1 << endl;
    }
    return 0;
}