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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cnt += (v[0] > 0);
        for (int i = 1; i < n; i++)
        {
            if (v[i] > 0 && v[i - 1] == 0)
                cnt++;
        }
        if (cnt > 2)
            cnt = 2;
        cout << cnt << endl;
    }

    return 0;
}