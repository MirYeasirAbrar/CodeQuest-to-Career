#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--) {
        string n;
        cin >> n;
        vector<int> ans;
        for (int i = n.size()-1; i >= 0; i--) {
            if (n[i] != '0') {
                int d = n[i] - '0';
                ans.push_back(d * pow(10, n.size()-i-1));
            }
        }
        cout << ans.size() << endl;
        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}