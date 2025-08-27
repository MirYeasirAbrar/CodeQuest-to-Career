#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        set<ll> s;
        for(ll i=10; i<n; i*=10){
            if((n%(i+1)) == 0) s.insert(n/(i+1));
        }
        cout << s.size() << endl;
        for(auto i:s) cout << i << " ";
        if(!s.empty()) cout << endl;
    }    
    return 0;
}