#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    long long price, n, number;   
    cin >> price >> n >> number;
    number = number*(number+1)/2;
    price *= number;
    if (price - n >= 0) cout << price - n;
    else cout << 0;
    return 0;
}