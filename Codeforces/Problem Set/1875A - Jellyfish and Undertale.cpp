#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        ll a,b,n;
		cin >> a >> b >> n;
		ll ans = b;
		ll x[n];
		for(ll i=0; i<n; i++){
			cin >> x[i];
			ans += min(x[i],a-1);
		}
		cout << ans << endl;
    }    
    return 0;
}