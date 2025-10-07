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
        int n, ans = 0;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i + 1] == 0)
            {
                ans = -1;
                break;
            }
            while (a[i] >= a[i + 1])
                a[i] /= 2, ans++;
        }
        cout << ans << endl;
    }

    return 0;
}