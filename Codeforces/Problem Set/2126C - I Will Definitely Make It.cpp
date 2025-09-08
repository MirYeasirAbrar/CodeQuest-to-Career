#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll h[n];
        for (ll i = 0; i < n; i++)
            cin >> h[i];
        ll y = h[k - 1];
        sort(h, h + n);
        bool x = true;
        for (ll i = 0; i < n - 1; i++){
            if (h[i] < y)
                continue;
            if ((h[i + 1] - h[i]) > y)
                x = false;
        }
        cout << (x ? "YES" : "NO") << endl;
    }    
    return 0;
}