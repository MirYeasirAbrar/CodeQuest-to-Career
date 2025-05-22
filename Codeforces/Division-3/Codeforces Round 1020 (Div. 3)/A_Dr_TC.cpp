#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for (auto x: s) {
        if (x == '0') ans++;
        else ans += n - 1;
    }
    cout << ans << '\n';
}
 
int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}