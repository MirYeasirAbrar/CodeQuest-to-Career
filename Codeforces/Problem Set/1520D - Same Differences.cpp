#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll n, cnt;
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        map<ll, ll> mp;
        cin >> n;
        for (int i = 1, t; i <= n; i++)
            cin >> t, mp[t - i]++;
        for (int i = -n; i <= n; i++)
            if (mp[i] > 1)
                cnt += mp[i] * (mp[i] - 1) / 2;
        cout << cnt << "\n";
    }

    return 0;
}