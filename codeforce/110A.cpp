#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    string s;   cin >> s;
    int count = 0;
    for (char i:s) {
        if (i == '4' || i == '7') count ++;
    }
    if (count == 4 || count == 7) cout << "YES";
    else cout << "NO";
    return 0;
}