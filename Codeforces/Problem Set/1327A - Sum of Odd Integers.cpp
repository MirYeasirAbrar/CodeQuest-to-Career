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
        ll n, k;
        cin >> n >> k;
        if ((k * k) <= n && (n + k) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}