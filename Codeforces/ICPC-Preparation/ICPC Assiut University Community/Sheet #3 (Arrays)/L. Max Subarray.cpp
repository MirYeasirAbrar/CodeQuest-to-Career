#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int start = 0; start < n; start++) {
            long long maxVal = a[start];
            for (int end = start; end < n; end++) {
                maxVal = max(maxVal, a[end]);
                cout << maxVal << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
