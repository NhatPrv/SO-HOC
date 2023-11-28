#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    string s;   cin >> s;
    int count=1;
    for (int i=1;i<s.size();i++) { 
        if (s[i] != s[i-1]) count = 1;
        else count++;
        if (count >= 7) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}