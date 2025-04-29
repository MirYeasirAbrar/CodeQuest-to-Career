#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int norm = 0, rev = 0;
    int q; cin >> q;
    int tot = 0;
    int n = 0;
    deque<int> qNorm, qRev;
    int p = 0;
    while (q--) {
        int s; cin >> s;
        if (s == 1) {
            int last = qNorm.back();
            qNorm.pop_back();
            qNorm.push_front(last);
            norm += (tot - last);
            norm -= last * n;
            norm += last;

            last = qRev.front();
            qRev.pop_front();
            qRev.push_back(last);
            rev -= (tot - last);
            rev += last * n;
            rev -= last;
        }
        else if (s == 2) {
            swap(rev, norm);
            swap(qNorm, qRev);
        }
        else if (s == 3) {
            n++;
            int k; cin >> k;
            qNorm.push_back(k);
            qRev.push_front(k);
            norm += k * n;
            rev += tot;
            rev += k;
            tot += k;
        }
        cout << norm << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}