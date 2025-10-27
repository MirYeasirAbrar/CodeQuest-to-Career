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
        ll y = 0, o = 1, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            x += y;
            y = x - i;
            if (y < 0)
                o = 0;
        }
        puts(o ? "YES" : "NO");
    }

    return 0;
}