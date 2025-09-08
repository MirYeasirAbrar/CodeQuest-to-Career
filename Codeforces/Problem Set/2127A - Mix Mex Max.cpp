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
        set<int> s;
        bool flag = true;
        while (n--){
            int x;
            cin >> x;
            if (x == 0)
                flag = false;
            else if (x != -1)
                s.insert(x);
        }
        cout << ((!flag || s.size() > 1) ? "NO\n" : "YES\n");
    }    
    return 0;
}