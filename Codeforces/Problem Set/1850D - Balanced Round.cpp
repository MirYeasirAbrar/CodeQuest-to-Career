#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; cin >> a[i++]);
        sort(a.begin(), a.end());
        int count = 0, mx = 0;
        for(int i=1; i<n; i++){
            if (a[i] - a[i-1] <= k) {
                count++;
                mx = max(mx, count);
            } else {
                count = 0;
}
        }
        cout << n - mx - 1 << endl;
    }    
    return 0;
}