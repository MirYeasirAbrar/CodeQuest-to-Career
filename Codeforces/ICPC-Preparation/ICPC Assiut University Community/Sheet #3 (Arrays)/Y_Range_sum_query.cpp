#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, t; cin >> n >> t;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    // Build prefix sum
    vector<long long> prefix(n+1, 0);
    for(int i=0; i<n; i++)
        prefix[i+1] = prefix[i] + a[i];

    while(t--){
        int l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
    }
    return 0;
}