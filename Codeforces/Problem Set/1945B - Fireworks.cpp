#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        ll a, b, m;
        cin >> a >> b >> m;
        cout << ((m / a) + (m / b) + 2) << endl;
    }    
    return 0;
}