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
        int a[n], s = 0;
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n);
        while ((a[0] + a[n - s - 1]) % 2 && (a[n - 1] + a[s]) % 2)
            s++;
        cout << s << endl;
    }

    return 0;
}