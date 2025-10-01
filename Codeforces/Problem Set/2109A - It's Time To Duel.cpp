#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int a[1005];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, b = 0, cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            cnt += a[i];
            if (i != 1 && a[i] == 0 && a[i - 1] == 0)
                b = 1;
        }
        cout << (b || cnt == n ? "YES\n" : "NO\n");
    }

    return 0;
}