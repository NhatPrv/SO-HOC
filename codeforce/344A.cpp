#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    long long n;    cin >> n;
    vector<long long> arr(n);
    long long count=1;
    cin >> arr[0];
    for (int i=1;i<n;i++) {
        cin >> arr[i];
        if (arr[i] != arr[i-1]) count++;
    }
    cout << count;
    return 0;
}