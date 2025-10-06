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
        ll n, s = 0, z = 0;
        bool flag = false;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i != n - 1)
                s += v[i];
            if (v[i] > 0)
                flag = true;
            if ((flag) && (v[i] == 0) && (i != n - 1))
                z++;
        }
        cout << s + z << "\n";
    }

    return 0;
}