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
        int x, y;
        cin >> x >> y;
        if (y > x)
            cout << 2 << endl;
        else if (x - y <= 1 || y == 1)
            cout << -1 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}