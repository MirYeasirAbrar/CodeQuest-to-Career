#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        cout << (b % 2 == c % 2) << " " << (a % 2 == c % 2) << " " << (a % 2 == b % 2) << endl;
    }    
    return 0;
}