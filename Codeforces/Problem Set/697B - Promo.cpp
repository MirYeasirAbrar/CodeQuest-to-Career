#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    ll n, q;
    cin >> n >> q;

    vector<ll> a(n), sum(n + 1, 0);
    for (auto &val : a)
        cin >> val;
    sort(a.rbegin(), a.rend());
    for (ll i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i - 1];
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << sum[x] - sum[x - y] << endl;
    }

        return 0;
    }