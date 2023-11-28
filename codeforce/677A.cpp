#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n, h;   cin >> n >> h;
    int length = 0;
    for (int i=0;i<n;i++) {
        int x;  cin >> x;
        if (x <= h) length++;
        else length+=2;
    }
    cout << length;
    return 0;
}