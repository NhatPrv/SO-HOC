#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    string s, s1;   cin >> s >> s1;
    int n = s.size();
    for (int i=0;i<n;i++) {
        if (s[i] != s1[n-1-i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}