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
        int ans = 0;
        int x;
        cin >> x;
        int f = 0;
        for (int i = 1; i < n; i++)
            ans += (cin >> f, ((f + 2 * x - 2) / (2 * x - 1)) - 1);
        cout << ans << endl;
    }

    return 0;
}