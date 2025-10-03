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
        int n, H, M;
        cin >> n >> H >> M;
        int dif = 1e9;

        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;
            dif = min(dif, (60 * (h - H) + (m - M) + 24 * 60) % (24 * 60));
        }
        cout << dif / 60 << ' ' << dif % 60 << endl;
    }

    return 0;
}