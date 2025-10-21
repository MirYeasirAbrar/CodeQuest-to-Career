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
        int m;
        cin >> m;
        m--;
        for (int i = 2; i < m; i++)
        {
            if (__gcd(i, m - i) == 1)
            {
                cout << i << " " << m - i << " " << 1 << endl;
                break;
            }
        }
    }

        return 0;
}
