#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, b;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i)
            if (s[i] == '1')
                b = i, ++cnt;
        if (!(cnt % 2) && !(cnt == 2 && s[b] == s[b - 1]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}