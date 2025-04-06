#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int j = 0; j < m; j++) cin >> b[j];

        sort(b.begin(), b.end());

        long long p = min(a[0], b[0] - a[0]);
        bool possible = true;

        for (int i = 1; i < n; i++) {
            if (max(b[m - 1] - a[i], a[i]) < p) {
                cout << "NO\n";
                possible = false;
                break;
            }

            auto pos = lower_bound(b.begin(), b.end(), p + a[i]);

            if (pos == b.end()) p = a[i];
            else if (a[i] >= p) p = min(*pos - a[i], a[i]);
            else p = *pos - a[i];
        }

        if (possible) cout << "YES\n";
    }

    return 0;
}
