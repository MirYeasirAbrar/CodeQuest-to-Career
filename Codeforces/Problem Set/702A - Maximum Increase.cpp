#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int c = 0, ans = 0;

    for(int i=0; i<n-1; i++){
        (a[i] < a[i+1]) ? c++ : c = 0;
        ans = max(c, ans);
    }
    cout << ans + 1 << endl;
    return 0;
}