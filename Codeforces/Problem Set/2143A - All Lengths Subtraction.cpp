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
        int t;
        cin >> t;
        vector<int> a(t);

        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
        bool f = 1;
        for (int i = 1; i < t - 1; i++)
        {
            if (a[i - 1] > a[i] && a[i] < a[i + 1])
            {
                f = 0;
                break;
            }
        }

        cout << (f ? "YES\n" : "NO\n");
    }

    return 0;
}