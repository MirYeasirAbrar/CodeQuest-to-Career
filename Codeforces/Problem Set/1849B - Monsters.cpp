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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            x %= k;
            if (x == 0)
                x = k;
            v.push_back({x, -i});
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < v.size(); i++)
            cout << -v[i].second << " ";
        cout << endl;
    }

    return 0;
}