#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<long long> a(n, 0), sum(n, 0);

        for (int j = 0; j < n; j++) {
            long long tmp;
            for (int i = 0; i < m; i++) {
                cin >> tmp;
                sum[j] += tmp;
                tmp *= (m - i);
                a[j] += tmp;
            }
        }

        sort(sum.begin(), sum.end());
        long long ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            ans += a[i];
            ans += sum[i] * i * m;
        }

        cout << ans << "\n";
    }
    return 0;
}
