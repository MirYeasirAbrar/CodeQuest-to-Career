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
        long long a[n + 2][m + 2] = {0};
        for (int i = 1; i <= m + 1; i++)
            a[0][i] = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cout << min(max(max(a[i][j - 1], a[i - 1][j]), max(a[i + 1][j], a[i][j + 1])), a[i][j]) << ' ';
            cout << endl;
        }
    }

    return 0;
}