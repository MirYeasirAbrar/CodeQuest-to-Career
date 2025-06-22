#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end());
    int mini = INT_MAX;
    for(int i=n; i<=m; i++){
        mini = min(mini, abs(a[i-1] - a[i-n]));
    }

    cout << mini << endl;
    return 0;
}