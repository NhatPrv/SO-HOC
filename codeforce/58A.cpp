#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    string s;   cin >> s;
    int count = 0;
    for (int i=0;i<s.size();i++) {
        if (count == 0 && s[i] == 'h') count++;
        else if (count == 1 && s[i] == 'e') count++;
        else if (count == 2 && s[i] == 'l') count++;
        else if (count == 3 && s[i] == 'l') count++;
        else if (count == 4 && s[i] == 'o') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}