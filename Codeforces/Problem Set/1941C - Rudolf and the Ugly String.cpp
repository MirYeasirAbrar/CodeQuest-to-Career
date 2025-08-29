#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int ans = 0;
        for (int i = 0; i < n - 2; i++) {
            if (s.substr(i, 3) == "map")
                ans++, i += 2;
            else if (s.substr(i, 3) == "pie")
                ans++, i += 2;
        }
        cout << ans << endl;
    }    
    return 0;
}