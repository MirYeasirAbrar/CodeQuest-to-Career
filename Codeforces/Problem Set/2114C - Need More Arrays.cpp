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
        int val = 0, prev = INT_MIN, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            if (val > (prev + 1))
            {
                ans++;
                prev = val;
            }
        }
        cout << ans << endl;
    }

    return 0;
}