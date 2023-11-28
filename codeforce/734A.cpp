#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n;  cin >> n;
    string s;   cin >> s;
    int D=0, A=0;
    for (int i=0;i<n;i++) {
        if (s[i] == 'A') A++;
        else D++;
    }
    if (D==A) cout << "Friendship";
    else {
        if (A>D) cout << "Anton";
        else cout << "Danik";
    }
    return 0;
}