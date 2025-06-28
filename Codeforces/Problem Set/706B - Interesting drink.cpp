#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    sort(a.begin(), a.end());
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        cout << upper_bound(a.begin(), a.end(), k) - a.begin() << endl;
    }
    return 0;
}