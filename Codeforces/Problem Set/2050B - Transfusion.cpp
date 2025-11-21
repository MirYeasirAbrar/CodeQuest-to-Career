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
        int n, c1 = 0, c2 = 0;
        ll s1 = 0, s2 = 0;
        cin >> n;
        for (int i = 1, x; i <= n; i++)
        {
            cin >> x;
            if (i & 1)
                c1++, s1 += x;
            else
                c2++, s2 += x;
        }
        if (!(s1 % c1) && !(s2 % c2) && s1 / c1 == s2 / c2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}