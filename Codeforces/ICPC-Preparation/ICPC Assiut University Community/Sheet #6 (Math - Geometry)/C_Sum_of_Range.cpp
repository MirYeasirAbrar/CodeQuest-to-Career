#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

ll rangeSum(ll l, ll r) {
    return (r * (r + 1) / 2) - ((l - 1) * l / 2);
}

ll evenSum(ll l, ll r) {
    if (l % 2 != 0) l++;
    if (r % 2 != 0) r--;
    if (l > r) return 0;
    ll n = (r - l) / 2 + 1;
    return n * (l + r) / 2;
}

ll oddSum(ll l, ll r) {
    if (l % 2 == 0) l++;
    if (r % 2 == 0) r--;
    if (l > r) return 0;
    ll n = (r - l) / 2 + 1;
    return n * (l + r) / 2;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll a, b; cin >> a >> b;
    if (a > b) swap(a, b);

    cout << rangeSum(a, b) << endl;
    cout << evenSum(a, b) << endl;
    cout << oddSum(a, b) << endl;
    return 0;
}