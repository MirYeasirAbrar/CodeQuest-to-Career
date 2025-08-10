#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll a[2000005],b[2000005];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
		ll sum = 0;
        b[0] = 0;
		for(ll i=1;i<=n;i++){
			cin >> a[i];
			b[i] = max(a[i],b[i-1]);
		}
		for(ll i=n;i>=1;i--){ 
			cout << sum+b[i] << " ";
			sum += a[i];
		}
		cout << endl;    
    }
    return 0;
}