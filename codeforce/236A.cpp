#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    string s;   cin >> s;
    map<char, int> m;
    for (int i=0;i<s.size();i++) {
        m[s[i]]++;
    }
    if (m.size()&1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}