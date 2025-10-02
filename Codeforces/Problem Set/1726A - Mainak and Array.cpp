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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, a[i] - a[1]);
            ans = max(ans, a[n] - a[i]);
            ans = max(ans, a[i] - a[i % n + 1]);
        }
        cout << ans << endl;
    }

    return 0;
}