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
        int n, m;
        cin >> n >> m;
        int sign = 1;
        int p[n];
        int i, j;
        for (i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            int op = x % n;
            p[x % n] = i;
            for (j = 1; j < m; j++)
            {
                cin >> x;
                if (x % n != op)
                    sign = 0;
            }
        }
        if (sign)
        {
            for (i = 0; i < n; i++)
            {
                cout << p[i] << ' ';
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}