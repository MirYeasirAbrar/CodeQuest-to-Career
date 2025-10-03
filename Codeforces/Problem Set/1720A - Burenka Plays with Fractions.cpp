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
        if (a * d == b * c)
            cout << "0" << endl;
        else if (min(a * d, c * b) == 0 || max(a * d, c * b) % min(a * d, c * b) == 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}