#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a > b) swap(a, b);
        bool x = (c >= a && c <= b);
        bool y = (d >= a && d <= b);
        cout << (x != y ? "YES" : "NO") << endl;
    }    
    return 0;
}