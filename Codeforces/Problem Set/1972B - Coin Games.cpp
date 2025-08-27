#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int cnt = count(s.begin(), s.end(), 'U');
        cout << ((cnt % 2 == 0) ? "NO" : "YES") << endl;
    }    
    return 0;
}