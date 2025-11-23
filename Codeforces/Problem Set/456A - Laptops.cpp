#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, f = 0, x, y;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        if (x != y)
            f = 1;
    }
    if (f)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";

    return 0;
}