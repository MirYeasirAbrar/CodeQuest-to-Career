#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, m;
        string s, t, c;
        cin >> n >> s >> m >> t >> c;
        for (int i = 0; i < m; i++){
            if (c[i] == 'V') s = t[i] + s;
            else s = s + t[i];
        }
        cout << s << endl;
    }    
    return 0;
}