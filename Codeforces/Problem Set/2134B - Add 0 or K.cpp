#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        ll n, k, v;
        cin >> n >> k;
        while (n--){
            cin >> v;
            cout << v + (v % (k + 1)) * k << " ";
        }
        cout << endl;
    }    
    return 0;
}