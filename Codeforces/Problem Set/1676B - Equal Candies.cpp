#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector<long long> a(n);
    long long mn = INT_MAX;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mn = min(mn, a[i]);
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
      ans += a[i] - mn;
    }
    cout << ans << "\n";
    
    }

    return 0;
}