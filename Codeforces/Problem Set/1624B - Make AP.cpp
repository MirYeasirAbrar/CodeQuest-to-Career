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
        ll a, b, c;
        cin >> a >> b >> c;
        cout << ((a + c) % (2 * b) == 0 || ((2 * b - c) % a == 0 && 2 * b - c > 0) || ((2 * b - a) % c == 0 && 2 * b - a > 0) ? "YES" : "NO") << endl;
    }

    return 0;
}