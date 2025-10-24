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
        int l, r, a;
        cin >> l >> r >> a;
        int x = r / a * a - 1;
        if (x < l)
            x = r;
        cout << max(r / a + r % a, x / a + x % a) << endl;
    }

    return 0;
}