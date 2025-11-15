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
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = n - 1;
        while (l < n && a[l] == a[0])
            l++;
        while (r >= 0 && a[r] == a[n - 1])
            r--;
        if (a[0] == a[n - 1])
            cout << max(0, r - l + 1) << endl;
        else
            cout << min(r + 1, n - l) << endl;
    }

    return 0;
}