#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n, c; cin >> n >> c;
        vector<ll> v(n);
        for(auto &x : v) cin >> x;
        sort(v.rbegin(), v.rend());
        int count = 0;
        for(auto x : v){
            if(x*(1ll << count) <= c) ++count;
        }
        cout << n-count << endl;
    
    }

    return 0;
}