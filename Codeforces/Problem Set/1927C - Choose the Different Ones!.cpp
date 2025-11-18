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
        int n, m, k;
        cin >> n >> m >> k;
        int k2 = k / 2;
        set<int> a, b, c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x >= 1 and x <= k)
                a.insert(x), c.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (x >= 1 and x <= k)
                b.insert(x), c.insert(x);
        }
        (c.size() == k and a.size() >= k2 and b.size() >= k2) ? cout << "yes" << endl : cout << "no" << endl;
    }

    return 0;
}