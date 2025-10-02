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
        vector<int> a(n), c(n + 1);
        for (auto &x : a)
            cin >> x, ++c[x];
        int m = 0;
        for (int i = 0; i < k; i++)
            if (!c[i])
                ++m;
        cout << max(m, c[k]) << endl;
    }
    return 0;
}