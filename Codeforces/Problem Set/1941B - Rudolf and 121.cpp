#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int a[100005];
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, f;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        f = 0;
        for (int i = 1; i <= n - 2; i++)
        {
            if (a[i] < 0)
                f = 1;
            a[i + 1] -= 2 * a[i];
            a[i + 2] -= a[i];
        }
        f |= a[n - 1] | a[n];
        cout << (f ? "NO\n" : "YES\n");
    }

    return 0;
}