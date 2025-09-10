#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        bool flag1 = 0, flag2 = 0;
        for (int i = 1; i <= n; i++){
            int l, r;
            cin >> l >> r;
            if (k == l)
                flag1 = 1;
            if (k == r)
                flag2 = 1;
        }
        if (flag1 == 1 && flag2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }    
    return 0;
}