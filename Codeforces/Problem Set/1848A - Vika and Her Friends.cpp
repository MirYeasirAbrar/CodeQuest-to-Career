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

        int a, b; cin >> a >> b;
        bool ok = false;
        while (k--){
            int c, d; cin >> c >> d;
            if ((abs(a - c) + abs(b - d)) % 2 == 0) ok = true;
        }
        cout << (ok ? "NO" : "YES") << endl;
    }    
    return 0;
}