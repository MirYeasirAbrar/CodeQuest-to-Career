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
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        cout << max(min(r, R) - max(l, L) + (R != r) + (l != L), 1) << endl;
    }

    return 0;
}