#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        sort(s.begin(), s.end());
        vector<int> f(26, 0);
        for (char c : s) {
            f[c - 'a']++;
        }
        string ans = "";
        for (int i = 0; i < k; i++) {
            int j = 0;
            while (j < n / k && f[j]) {
                f[j++]--;
            }
            ans += 'a' + j;
        }
        cout << ans << endl;
    }

    return 0;
}