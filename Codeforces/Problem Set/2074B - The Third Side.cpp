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
        int n, a, sum = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a, sum += a;
        cout << sum - n + 1 << endl;
    }

    return 0;
}