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
        int n, mx = 0, id = 0, sa = 1, pre = -1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (pre != -1 && pre != x)
                sa = 0;
            if (x > mx)
                mx = x, id = i;
            pre = x;
        }
        if (sa)
            cout << "No\n";
        else
        {
            cout << "Yes\n";
            for (int i = 1; i <= n; i++)
                cout << 1 + (i == id) << " ";
            cout << "\n";
        }
    }

    return 0;
}