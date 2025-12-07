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
        int n, k;
        cin >> n >> k;
        if ((n - k + 1) > 0 && (n - k + 1) & 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i)
                cout << 1 << " ";
            cout << n - k + 1 << endl;
        }
        else if ((n - (k - 1) * 2) > 0 && (n - (k - 1) * 2) % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i)
                cout << 2 << " ";
            cout << (n - (k - 1) * 2) << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}