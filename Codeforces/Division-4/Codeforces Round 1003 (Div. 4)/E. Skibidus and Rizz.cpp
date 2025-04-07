#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
   
        int t;
        cin >> t;
        while (t--) {
            int n, m, k;
            cin >> n >> m >> k;
            
            if (k <= max(n, m) && k >= abs(n - m)) {
                if (n > m) {
                    cout << string(k, '0');
                    for (int i = 0; i < (n - k); ++i) cout << "10";
                    for (int i = 0; i < (m - n + k); ++i) cout << "1";
                    cout << endl;
                } else {
                    cout << string(k, '1');
                    for (int i = 0; i < (m - k); ++i) cout << "01";
                    for (int i = 0; i < (n - m + k); ++i) cout << "0";
                    cout << endl;
                }
            } else {
                cout << -1 << endl;
            }
        }
    return 0;
}
