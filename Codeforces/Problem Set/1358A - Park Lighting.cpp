#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m, t;
    cin >> t;
    while (t--)
    {
        double A, B;
        cin >> n >> m;
        A = n, B = m;
        ll ans = 0;
        ans = ceil((A * B) / 2);
        cout << ans << endl;
    }

    return 0;
}