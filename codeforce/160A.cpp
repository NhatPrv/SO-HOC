#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n;  cin >> n;
    vector<int> arr(n);
    int sum = 0;
    int count;
    int ans = 0;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    int s=(sum+1)/2;
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i=0;i<n, s<=sum;i++) {
        sum-=arr[i];
        ans++;
    }
    cout << ans;
    return 0;
}