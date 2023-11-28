#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n,  k;  string s;
    cin >> n >> k >> s;
    for (int i=0;i<k;i++) {
        for (int j=0;j<n;++j) {
            if (s[j] == 'B' && s[j+1] =='G') {
                swap(s[j], s[j+1]);
                ++j;
            }
        }
    }
    cout << s;
    return 0;
}