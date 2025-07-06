#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
        int cur = 0, mx = 0;
        for(int p = 0; p < n; p++) {
            int x; cin >> x;
            if(x) {
                cur = 0;
                continue;
            }
            cur++;
            mx = max(mx, cur);
        }
        cout << mx << endl;
    
    }

    return 0;
}