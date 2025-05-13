#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    s = " " + s;
    vector<int> top(n+1, 0), bot(n+1, 0);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] == '1') {
            top[i] = bot[i-1] + 1;
        }
        else {
            top[i] = top[i-1] + (i - 1);
            bot[i] = bot[i-1] + (n - i);
        }
        ans = max(ans, max(top[i], bot[i]));
    }
    cout << ans << "\n";
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}