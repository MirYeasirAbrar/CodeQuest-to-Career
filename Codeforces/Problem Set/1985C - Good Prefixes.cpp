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
        ll a[n + 9], p[n + 9], mx = 0, ans = 0;
        p[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            p[i] = p[i - 1] + a[i];
            if (p[i] - mx == mx)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}