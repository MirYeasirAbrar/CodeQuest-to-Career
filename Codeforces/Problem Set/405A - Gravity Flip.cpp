#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end());
    for(int x : a) cout << x << " ";
    
    cout << endl;
    return 0;
}