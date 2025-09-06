#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, k, a;
        cin >> n >> a, k = abs(a - 1);
        for (int i = 2; i <= n; ++i)
            cin >> a, k = __gcd(k, abs(a - i));
        cout << k << "\n";

    }    
    return 0;
}