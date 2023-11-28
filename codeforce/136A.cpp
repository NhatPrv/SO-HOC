#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);   cout.tie(nullptr);
    int n, x;  cin >> n;
    vector<int> arr(n);
    for (int i=1;i<=n;i++) {
        cin >> x;
        arr[x-1] = i;
    }
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}