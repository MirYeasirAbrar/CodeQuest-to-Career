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
        map<int, int> m;
        map<int, int> m2;
        int u = INT_MAX;
        int n, c, d;
        cin >> n >> c >> d;
        int h = n * n;
        while (h--)
        {
            int k;
            cin >> k;
            m[k]++;
            u = min(u, k);
        }
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                m2[u + j * c + i * d]++;
            }
        }
        cout << ((m == m2) ? "YES" : "NO") << endl;
    }

    return 0;
}