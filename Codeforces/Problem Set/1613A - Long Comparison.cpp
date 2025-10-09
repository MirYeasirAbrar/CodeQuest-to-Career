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
        double a, b, x, y;
        cin >> a >> b >> x >> y;
        double sol = a / x * (pow(10, b - y));
        if (sol > 1)
            cout << ">" << endl;
        else if (sol < 1)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }

    return 0;
}