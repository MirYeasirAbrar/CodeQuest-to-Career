#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int a[10005];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int p = 0;
        for (int i = 2; i <= n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
                p = i;
        }
        if (p)
            cout << "YES" << endl
                 << p - 1 << " " << p << " " << p + 1 << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}