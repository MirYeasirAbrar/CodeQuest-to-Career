#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        bool ok = true;
        if((int)mp.size() <= 2) {
            for (auto& i : mp) {
                ok &= (i.second >= n / 2);
            }
        } else {
            ok = false;
        }

        cout << (ok ? "Yes" : "No") << '\n';
    
    }

    return 0;
}