#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int a[1000005];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n / 2; i++)
        {
            if (a[i] < a[n - i + 1])
                (i & 1) ? cout << "LR" : cout << "RL";
            else
                (i & 1) ? cout << "RL" : cout << "LR";
        }
        if (n & 1)
            cout << "L";
        cout << "\n";
    }
    return 0;
}