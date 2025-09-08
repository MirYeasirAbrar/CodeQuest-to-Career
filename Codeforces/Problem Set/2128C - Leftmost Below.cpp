#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, f, a;
        cin >> n;
        m = 1e9;
        f = 1;
        while (n--)
        {
            cin >> a;
            if (a <= m * 2 - 1)
                m = min(a, m);
            else
                f = 0;
        }
        cout << (f ? "YES" : "NO") << endl;
    }
    return 0;
}