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
        int ans = 1, curr = 1;
        for (int i = 0; i < n; i++){
            if (s[i] != s[i - 1])
                curr = 1;
            else
                curr++;
            ans = max(curr, ans);
        }
        cout << ans + 1 << endl;
    }    
    return 0;
}