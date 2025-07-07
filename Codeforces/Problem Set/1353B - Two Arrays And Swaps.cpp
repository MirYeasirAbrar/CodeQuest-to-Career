#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for (int i = 0; i < k; ++i) {
            if (a[i] < b[i]) swap(a[i], b[i]);        
            else break;
        }

        int sum = 0;
        for (int i = 0; i < n; ++i) sum += a[i];
        cout << sum << endl;
    }
    return 0;
}