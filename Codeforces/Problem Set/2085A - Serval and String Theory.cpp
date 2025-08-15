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
        int t, n, f, k;
        string s;
        f = 0;
        cin >> n >> k >> s;
        string r(s.rbegin(), s.rend());
        if (r > s)
            f = 1;
        sort(s.begin(), s.end());
        if (k && s[0] != s[n - 1])
            f = 1;
        printf("%s\n", f ? "YES" : "NO");
    }

    return 0;
}