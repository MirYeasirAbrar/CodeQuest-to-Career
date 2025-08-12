#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, k, q;
    string s, t;
    cin >> n >> k >> s;
    vector<vector<int>> nxt(n + 2, vector<int>(k, n));
    vector<int> d(n + 1, 0);
    for (int i = n - 1; i >= 0; i--){
        nxt[i] = nxt[i + 1];
        int mx = *max_element(nxt[i].begin(), nxt[i].end());
        d[i] = d[mx] + 1;
        nxt[i][s[i] - 'a'] = i;
    }
    cin >> q;
    while (q--){
        cin >> t;
        int pos = -1;
        for (char ch : t)
            pos = nxt[pos + 1][ch - 'a'];
        cout << d[pos] << endl;
    }
    return 0;
}