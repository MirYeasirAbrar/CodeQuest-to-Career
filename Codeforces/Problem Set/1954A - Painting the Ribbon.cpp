#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        cout << ((n - (n + m - 1) / m > k) ? "YES" : "NO") << endl;
    }    
    return 0;
}