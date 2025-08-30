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
        int n, mx = 0, ans = 0;
        cin >> n;
        vector<int> g[n + 7];
        for (int i = 1; i <= n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (int i = 1; i <= n; i++)
        {
            if (g[i].size() > 1)
            {
                int x = 0;
                for (int v : g[i])
                {
                    x += (g[v].size() == 1);
                }
                mx = max(x, mx);
                ans += x;
            }
        }
        cout << ans - mx << endl;
    }
    return 0;
}