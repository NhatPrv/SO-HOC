#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n;  cin >> n;
    if (n%4==0 || n%7==0 || n%47==0) {
        cout << "YES";
        return 0;
    }
    else {
        while (n>0) {
            if ((n%10) !=4 && (n%10) != 7) {
                cout << "NO";
                return 0;
            }  
            n/=10; 
        }
        cout << "YES";
    }
    
    return 0;
}