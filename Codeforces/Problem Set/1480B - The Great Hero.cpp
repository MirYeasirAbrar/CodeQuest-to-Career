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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n), g(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> g[i];
        for (int i = 0; i < n; i++)
        {
            int p;
            if (g[i] % a == 0)
                p = (g[i] / a);
            else
                p = g[i] / a + 1;
            b -= (p * v[i]);
        }
        sort(v.begin(), v.end());
        if (b >= 0 || abs(b) < v[n - 1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}