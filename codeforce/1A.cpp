#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, m;   cin >> n >> m;
    long long a;    cin >> a;
    if (n>a&&n%a!=0) n=n/a*a+a;

    if (m>a&&m%a!=0) m=m/a*a+a;
    long long s=m*n;
    a*=a;
    if (s%a==0) cout << s/a;
    else cout << (s/a)+1;
    return 0;
}