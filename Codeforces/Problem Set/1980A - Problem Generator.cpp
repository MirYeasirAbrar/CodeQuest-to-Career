#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, m; cin >> n >> m;
    vector<int> cnt(7,0);
    for (int i=0; i<n; ++i) {
      char c; cin >> c;
      ++cnt[c-'A'];
    }
    int ans=0;
    for (int i=0; i<7; ++i)
      ans += max(m-cnt[i], 0);
    cout << ans << endl;
    
    }

    return 0;
}