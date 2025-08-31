#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n, f, a, b, t;
    cin >> t;
    while (t--) {
        ll l = 0, r = 0, sum = 0;
        cin >> n >> f >> a >> b;
        for (int i = 1; i <= n; i++) {
            cin >> r;
            sum += min((r - l) * a, b);
            l = r;
        }
        cout << (sum >= f ? "NO" : "YES") << endl;
    }
    return 0;
}
