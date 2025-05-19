#include <bits/stdc++.h>
using namespace std;

void solve(){    
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "NO" << '\n';
        return;
    }

    for (int i = 2; i * i <= n; ++i) {    
        if (n % i == 0) {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}