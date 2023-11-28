#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;  cin >> n;
    int k;  cin >> k;
    vector<int> a(n+1);
    for (int i=1;i<=n;i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i=1;i<=n;i++) {
        if (a[i] >= a[k] && a[i]>0) count++;
    }
    cout << count;
    return 0;
}