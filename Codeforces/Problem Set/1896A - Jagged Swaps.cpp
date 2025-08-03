#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<long long> v(n);
    for(auto &x : v) cin >> x;
    
    cout << ((v[0] == 1) ? "YES" : "NO") << endl;
    
    }

    return 0;
}