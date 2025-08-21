#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector a(n, vector<int>(n)); 
        for (auto &x : a) for (int &y : x) cin >> y;
    
        int ans = 0;
        for (int i = 1-n; i < n; i++) {
            int mn = INT_MAX;
            for (int j = max(0, -i); max(j,j+i) < n; j++) {
                mn = min(mn, a[j][j+i]);
            }
            ans += max(0, -mn);
        }
    
        cout << ans << endl;
    }    
    return 0;
}