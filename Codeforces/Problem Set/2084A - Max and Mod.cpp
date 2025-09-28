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
        int n; cin >> n;
        if (n & 1)
        {
            cout << n << " ";
            for (int i = 1; i < n; ++i)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << "-1\n";
    }

    return 0;
}