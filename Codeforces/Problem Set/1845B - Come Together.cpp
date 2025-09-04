#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        cout << (abs(a - c) + abs(b - d) + 1 + abs(a - e) + abs(b - f) + 1 - abs(c - e) - abs(d - f)) / 2 << endl;
    }    
    return 0;
}