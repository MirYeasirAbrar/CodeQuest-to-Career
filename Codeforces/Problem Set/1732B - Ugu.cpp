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
        string s;
        int n, ans = -1;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            ans += ((!i && s[i] == '1') || (i && s[i] != s[i - 1]));
        cout << max(0, ans) << endl;
    }

    return 0;
}