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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a <= b)
            cout << b << endl;
        else if (c <= d)
            cout << -1 << endl;
        else
            cout << (a - b + c - d - 1) / (c - d) * c + b << endl;
    }

    return 0;
}