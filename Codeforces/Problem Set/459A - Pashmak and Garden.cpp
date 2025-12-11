#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int u = abs(a - c), v = abs(b - d);
    if (u != v && u != 0 && v != 0)
    {
        cout << -1 << endl;
    }
    else if (a == c)
    {
        cout << a + v << " " << b << " " << c + v << " " << d;
    }
    else if (b == d)
        cout << a << " " << b + u << " " << c << " " << d + u;
    else
        cout << a << " " << d << " " << c << " " << b << endl;

    return 0;
}