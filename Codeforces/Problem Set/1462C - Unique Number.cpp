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
        int n;
        cin >> n;
        string s;
        for (int i = 9; i > 0; i--)
        {
            if (n >= i)
                s = to_string(i) + s, n -= i;
        }
        cout << (n == 0 ? s : "-1") << "\n";
    }

    return 0;
}