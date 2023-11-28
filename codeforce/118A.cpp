#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    string s;   cin >> s;
    for (int i=0;i<s.size();i++) {
        if (s[i] >='A' && s[i] <= 'Z') {
            s[i] = char((int)s[i] + 32);   
        }
        if (s[i]!= 'y' && s[i] != 'a' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e') {
                cout << "." << s[i];
            }
        
    }
    return 0;
}