#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--) {
        int n, m; 
        cin >> n >> m;
        vector<int> a(n+1);
        map<int,int> mp;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        int ans = 0;
        for (auto p: mp) {
            int i = p.first;
            ans += min(mp[m - i], mp[i]);
        }
        cout << ans / 2 << endl;
    }
    return 0;
}
