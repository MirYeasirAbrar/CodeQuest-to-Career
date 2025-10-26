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
        ll n, x, a, k, mx, mn;
        cin >> n >> x;
        mx = mn = 0;
        for (k = 1; k <= n; k++)
        {
            cin >> a;
            mx += (a + x - 1) / x;
            mn += a;
        }
        cout << (mn + x - 1) / x << " " << mx << endl;
    }

    return 0;
}