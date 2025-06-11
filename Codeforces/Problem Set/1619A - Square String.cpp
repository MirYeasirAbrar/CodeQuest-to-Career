#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        if (n % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }
        string first = s.substr(0, n / 2);
        string second = s.substr(n / 2, n / 2);
        cout << (first == second ? "YES" : "NO") << endl;
    }

    return 0;
}