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
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int ans = 2;
        if (is_sorted(v.begin(), v.end()))
            ans = 0;
        else if (v[0] == 1 || v[n - 1] == n)
            ans = 1;
        else if (v[0] == n && v[n - 1] == 1)
            ans = 3;
        cout << ans << endl;
    }

    return 0;
}