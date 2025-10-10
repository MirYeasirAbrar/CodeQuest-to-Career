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
        ll n;
        cin >> n;
        if (n % 2 == 1 || n < 4)
            cout << -1 << endl;
        else
            cout << (n + 4) / 6 << " " << n / 4 << endl;
    }

    return 0;
}