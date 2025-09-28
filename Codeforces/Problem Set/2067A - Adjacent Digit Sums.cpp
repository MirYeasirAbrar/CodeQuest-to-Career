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
        int d = x + 1 - y;
        cout << (d >= 0 && d % 9 == 0 ? "Yes\n" : "No\n");
    }

    return 0;
}