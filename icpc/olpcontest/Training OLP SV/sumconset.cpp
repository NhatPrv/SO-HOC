#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;  long long t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    long long s = a[0];
    int max = 1;
    int j = 0;
    for (int i=1;i<n;i++) {
        s+=a[i];
        if (s > t) {
            if (max < i-j) max = i-j;
            while (s > t) {
                s-=a[j];
                j++;
            }
        }
    }
    cout << max;
    return 0;
}
