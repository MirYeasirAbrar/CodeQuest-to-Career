#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        vector<int> b(n), ans(n);
        for (int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        for (auto &x : b) cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++) ans[a[i].second] = b[i];
        for (auto k : ans) cout << k << " ";
        cout << endl;
    }    
    return 0;
}