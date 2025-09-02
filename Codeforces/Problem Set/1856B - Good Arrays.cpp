#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        ll s = 0;
        for (int &x : a)
            cin >> x, s += x;
        int c = count(a.begin(), a.end(), 1);
        cout << (n > 1 && c + 2 * n - s <= n ? "YES" : "NO") << endl;
    }    
    return 0;
}