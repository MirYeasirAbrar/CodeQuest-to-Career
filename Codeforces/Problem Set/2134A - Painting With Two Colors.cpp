#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, a, b; cin >> n >> a >> b;
        cout << (b%2==n%2 && (b>=a || a%2==n%2) ? "YES" : "NO") << endl;
    }    
    return 0;
}