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
        int n;
        cin >> n;
        map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int u;
            cin >> u;
            mp[u]++;
            mx = max(mx, mp[u]);
        }
        int rem = n - mx;
        int cnt = 0, ans = rem;
        while (rem > 0)
        {
            cnt++;
            rem -= mx;
            mx *= 2;
        }
        cout << cnt + ans << endl;
    }

    return 0;
}