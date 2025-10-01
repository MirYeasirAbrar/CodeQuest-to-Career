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
        ll n, x, y;
        cin >> n >> x >> y;
        if (x > y)
            swap(x, y);
        if (x || !y || (n - 1) % y)
        {
            cout << -1 << endl;
            continue;
        }
        for (int k = 2; k <= n; k += y)
        {
            for (int i = 1; i <= y; i++)
                cout << k << ' ';
        }
        cout << endl;
    }

    return 0;
}