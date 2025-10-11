#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;
        for (auto m = n / 4 * 4 + 1; m <= n; ++m)
            x += (x % 2 ? 1 : -1) * m;
        cout << x << "\n";
    }

    return 0;
}