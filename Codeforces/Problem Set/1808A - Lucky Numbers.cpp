#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int max = l;
        int maxdiff = -1;
        for (int i = l; i <= r; i++){
            string s = to_string(i);
            sort(s.begin(), s.end());
            int diff = s[s.size() - 1] - s[0];
            if (maxdiff < diff){
                maxdiff = diff;
                max = i;
            }
            if (maxdiff == 9){
                break;
            }
        }
        cout << max << endl;
    }    
    return 0;
}