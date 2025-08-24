#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> g(n);
        for (int i=0; i<n; i++) cin >> g[i];
        sort(g.begin(),g.end());
        reverse(g.begin(),g.end());
        long long ans = 0;
        for (int i=0; i<n; i+=2) ans += g[i];
        cout << ans << endl;
    }    
    return 0;
}