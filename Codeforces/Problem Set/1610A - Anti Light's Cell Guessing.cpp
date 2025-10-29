#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--){
        ll x, y;
        cin >> x >> y;
        cout << (x > 1) + (y > 1) << endl;
    }

    return 0;
}