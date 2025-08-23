#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll sum = 0, x;
        for(int i=0; i<n; i++){
            cin >> x;
            sum += (i == n-2 ? -x : x);
        }
        cout << sum << endl;
    }    
    return 0;
}