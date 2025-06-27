#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    ll a, b; cin >> a >> b;
    if(b < a) swap(a,b);

    ll sub = 0, sum = 0, div = 0, mod = 0;
    sub = b - a;
    div = sub / 10;
    mod = sub % 10;
    sum = div;

    if(mod > 0) sum++;   
    
    cout << sum << endl;
    }
    return 0;
}