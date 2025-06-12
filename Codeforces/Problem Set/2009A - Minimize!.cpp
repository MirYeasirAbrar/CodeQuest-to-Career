#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        vector<int> c;
        for(int i = a; i <= b; ++i) {
            c.push_back(i);
        }
        int n = c.size();
        vector<int> res(n);
        for(int i = 0; i < n; ++i) {
            res[i] = (c[i] - a) + (b - c[i]);
        }
        cout << *min_element(res.begin(), res.end()) << endl;
    }

    return 0;
}