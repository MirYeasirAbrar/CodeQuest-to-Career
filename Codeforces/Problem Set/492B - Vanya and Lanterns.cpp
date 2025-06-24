#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, l; cin >> n >> l;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    int mn = 0;
    for(int i=0; i<n-1; i++){
        if((a[i+1] - a[i]) > mn){
            mn = a[i+1] - a[i];
        }
    }

    double p, q, r, sol, d;
    p = a[0];
    q = (double)mn/2;
    r = max(p, q);
    d = l - a[n-1];
    sol = max(r, d);

    cout << fixed << setprecision(10) << sol << endl;
    return 0;
}