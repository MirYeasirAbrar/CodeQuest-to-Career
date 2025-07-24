#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    ll a, b, n;
    while (t--)
    {
        cin >> a >> b >> n;
        ll sum = 0, ans = 0;
        while (sum <= n)
        {
            if (a > b)
            {
                b += a;
                sum = b;
                ans++;
            }
            else
            {
                a += b;
                sum = a;
                ans++;
            }
            if (sum > n)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}