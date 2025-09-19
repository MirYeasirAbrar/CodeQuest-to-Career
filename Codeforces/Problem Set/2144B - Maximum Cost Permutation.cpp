#include <bits/stdc++.h>
using namespace std;
#define N 1050500
int s[N], n, m, a[N], b[N], tot;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> a[i], s[a[i]] = 1;
        for (int i = 1; i <= n; ++i)
            if (!s[i])
                b[++tot] = i;
        for (int i = 1; i <= n; ++i)
            if (a[i] == 0)
                a[i] = b[tot--];
        int ql = n, qr = 0;
        for (int i = 1; i <= n; ++i)
            if (i != a[i])
            {
                ql = i;
                break;
            }
        for (int i = n; i; --i)
            if (i != a[i])
            {
                qr = i;
                break;
            }
        cout << max(0, qr - ql + 1) << "\n";
        for (int i = 1; i <= n; ++i)
            b[i] = a[i] = s[i] = 0;
        tot = 0;
    }
}