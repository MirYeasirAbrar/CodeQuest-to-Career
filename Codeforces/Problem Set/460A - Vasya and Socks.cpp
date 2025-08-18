#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n, m; cin >> n >> m;
    cout << (n*m - 1) / (m-1);
    return 0;
}