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
        string a, b;
        cin >> a;
        cin >> b;
        int cnt[2] = {0};
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                cnt[i & 1]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
                cnt[(i & 1) ^ 1]--;
        }
        if (max(cnt[0], cnt[1]) > 0)
            puts("NO");
        else
            puts("YES");
    }

    return 0;
}