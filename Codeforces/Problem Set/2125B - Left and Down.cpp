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
        long long a, b, k;
        cin >> a >> b >> k;
        if (max(a, b) / gcd(a, b) <= k)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}