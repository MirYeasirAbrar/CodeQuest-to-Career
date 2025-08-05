#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        ll n, x, k; cin >> n >> x >> k;
        cout << ((2*k>=x*(x+1) && 2*k<=n*(n+1)-(n-x)*(n-x+1)) ? "YES" : "NO") << endl;
    }
    return 0;
}