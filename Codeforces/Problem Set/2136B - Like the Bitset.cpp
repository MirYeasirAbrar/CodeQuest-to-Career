#include <bits/stdc++.h>
using namespace std;
int t, n, k, sum, cnt1, cnt0;
string s;
bool f;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> s, s = " " + s, f = 0, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == 49)
                sum++;
            else if (sum > k - 1)
            {
                f = 1;
                break;
            }
            else
                sum = 0;
        }
        if (sum > k - 1)
            f = 1;
        if (f)
            cout << "No\n";
        else
        {
            cout << "Yes\n";
            cnt1 = 1, cnt0 = n;
            for (int i = 1; i <= n; i++)
            {
                if (s[i] == 49)
                    cout << cnt1++ << ' ';
                else
                    cout << cnt0-- << ' ';
            }
            cout << '\n';
        }
    }
}