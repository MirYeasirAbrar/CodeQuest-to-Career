#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int a[105];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {   int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int f = 1;
        for (int i = 0; i < n - 1 & f; i++)
            for (int j = i + 1; j < n & f; j++)
            {
                if (a[i] > a[j])
                {
                    cout << "YES\n"
                         << 2 << endl;
                    cout << a[i] << " " << a[j] << endl;
                    f = 0;
                }
            }
        if (f)
            cout << "NO\n";
    }

    return 0;
}