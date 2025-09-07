#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; cout << ((i++ % 2) ? -1 : (i - 1 == n ? 2 : 3)) << (i <= n ? ' ' : '\n'))
            ;
    }
    return 0;
}