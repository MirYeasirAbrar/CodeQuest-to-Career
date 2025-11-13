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
        int S = 1000;
        cout << S << " ";
        for (int i = 2; i <= n; i++)
        {
            int x;
            cin >> x;
            S += x;
            cout << S << " ";
        }
        cout << endl;
    }

    return 0;
}