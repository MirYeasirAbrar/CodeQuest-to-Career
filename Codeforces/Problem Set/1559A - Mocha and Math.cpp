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
        int a, s;
        cin >> s;
        for (int i = 2; i <= n; i++)
        {
            cin >> a;
            s &= a;
        }
        cout << s << endl;
    }

    return 0;
}