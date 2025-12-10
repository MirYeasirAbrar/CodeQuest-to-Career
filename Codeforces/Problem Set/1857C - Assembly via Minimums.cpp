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
        int m = n * (n - 1) / 2, a[m];
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(a, a + m);
        for (int i = 0; i < m; i += --n)
            cout << a[i] << " ";
        cout << 1000000000 << endl;
    }

    return 0;
}