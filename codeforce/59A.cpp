#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    string s;   cin >> s;
    int upper=0, lower=0;
    for (char c:s) {
        if (c >= 'a' && c<='z') lower++;
        else upper++;
    }
    if (upper>lower) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(),::tolower);
    cout << s;
    return 0;
}