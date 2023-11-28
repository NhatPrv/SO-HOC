#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    string s;   cin >> s;
    sort(s.begin(), s.end());
    int index=0;
    for (int i=0;i<s.size();i++) {
        if (s[i]!='+') {
            index = i;
            break;
        }  
    }
    for (int i = index; i < s.size()-1; i++){
        cout << s[i] << "+";
    }
    cout << s[s.size()-1];
    return 0;
}