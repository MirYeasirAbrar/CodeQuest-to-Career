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
        vector<int> v(n);
        for (auto &s : v){
            cin >> s;
            if (s == 1)
                s++;
        }
        for (int i = 1; i < n; i++){
            if (v[i] % v[i - 1] == 0)
                v[i]++;
        }
        for (auto x : v) cout << x << ' ';
        cout << endl;
    }    
    return 0;
}