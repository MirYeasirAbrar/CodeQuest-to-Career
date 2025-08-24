#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << (n+k-3)/(k-1) << endl;
    }    
    return 0;
}