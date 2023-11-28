#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n;  cin >> n;
    int max=0, sum=0;

    for (int i=0;i<n;i++) {
        int x, y;
        cin >> x >> y;
        sum-=x;
        sum+=y;
        if (max < sum) max=sum;
    }
    cout << max;
    return 0;
}