#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;    cin >> t;
    while (t--) {
        long long n;    cin >> n;
        long long length = 1;
        long long count = 9;

        while (n > length * count) {
            n -= length * count;
            length++;
            count *= 10;
        }

        long long num = pow(10, length - 1) + (n - 1) / length;

        long long digitPosition = (n - 1) % length;
        long long digit = to_string(num)[digitPosition] - '0';

        cout << digit;
    }

    return 0;
}