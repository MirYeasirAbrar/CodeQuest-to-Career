#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int a[1000005];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < 19; i++)
            a[i] = n % 3, n /= 3, k -= a[i];
        if (k < 0){
            cout << "-1\n";
            continue;
        }
        k >>= 1;
        for (int i = 18; i; i--){
            int w = min(k, a[i]);
            a[i] -= w, k -= w, a[i - 1] += w * 3;
        }
        ll ans = 0, w = 1;
        for (int i = 0; i < 19; i++)
            ans += (w * 3 + w / 3 * i) * a[i], w *= 3;
        cout << ans << endl;
    }    
    return 0;
}