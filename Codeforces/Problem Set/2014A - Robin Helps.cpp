#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        long long g = 0, cnt = 0;
        for (const auto &x : a)
        {
            if (x >= k)
            {
                g += x;
                continue;
            }
            if (x == 0 && g > 0)
            {
                g--;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}