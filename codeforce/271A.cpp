#include <bits/stdc++.h>
using namespace std;

bool BY(int y) {
    int a = y%10;   y/=10;
    int b = y%10;   y/=10;
    int c = y%10;   y/=10;
    int d = y%10;
    if (a == b || a == c || a == d ||
        b == c || b == d || c == d) return false;
    return true;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n;  cin >> n;
    for (int i=1+n;;i++) {
        if (BY(i)) {
            cout << i;
            return 0;
        }
    }
    return 0;
}