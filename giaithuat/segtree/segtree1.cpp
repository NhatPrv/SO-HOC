#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)


const int N = 1005;
int n;
int a[N];
int tree[N*4];

void buildTree(int id, int l, int r) {
    if (l == r) {
        tree[id] = a[l];
        return;
    }
    int mid = (l+r)/2;
    buildTree(id * 2, l, mid);
    buildTree(id*2+1, mid+1, r);
    tree[id] = max(tree[id*2+1], tree[id*2]);
}

void updateTree(int id, int l, int r, int u, int v, int val) {
    if (u > r  || v < l) return;
    if (l == r) {
        tree[id] += val;
        return;
    }
    int mid = (l+r)/2;
    updateTree(id*2, l, mid, u, v, val);
    updateTree(id*2+1, mid+1, r, u, v, val);
    tree[id] = max(tree[id*2+1], tree[id*2]);
}

int getVal(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return INT_MIN;
    if (l == r) return tree[id];
    int mid = (l+r)/2;
    return max(getVal(id*2, l, mid, u, v), getVal(id*2+1, mid+1, r, u, v));
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
    }

    buildTree(1,1,n);
    int t;  cin >> t;

    while (t--) {
        int s; cin >> s;
        if (s == 1) {
            int u, v, val;
            cin >> u >> v >> val;
            updateTree(1, 1, n, u, v, val);
        }
        else {
            int u, v;
            cin >> u >> v;
            cout << getVal(1, 1, n, u, v) << "\n";
        }
    }

    return 0;
}