#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<int> a(3);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end());
    cout << a.back() - a[0] << endl;
    return 0;
}