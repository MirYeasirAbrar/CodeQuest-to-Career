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
        ll n;
        cin >> n;
        ll sum = 0, mini = 1e9, mini1 = 1e9;
        while (n--)
        {
            ll m;
            cin >> m;
            ll a[m];
            for (ll i = 0; i < m; i++)
                cin >> a[i];
            sort(a, a + m);
            sum += a[1];
            mini = min(mini, a[1]);
            mini1 = min(mini1, a[0]);
        }

        cout << sum - mini + mini1 << endl;
    }

    return 0;
}