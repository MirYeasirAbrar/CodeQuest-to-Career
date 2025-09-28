#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int a[110];
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + 1 + n);
        cout << a[n] - a[1] << "\n";
    }

    return 0;
}