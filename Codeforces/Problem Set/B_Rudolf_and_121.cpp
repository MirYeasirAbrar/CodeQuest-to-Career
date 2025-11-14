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
        int a[n];
        bool f = true;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] == 0)
                continue;
            if (a[i] < 0)
                f = false;
            int k = a[i];
            a[i] = 0;
            a[i + 1] -= 2 * k;
            a[i + 2] -= k;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i])
                f = false;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}