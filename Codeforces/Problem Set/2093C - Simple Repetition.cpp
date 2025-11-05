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
        int n, k, p = 1;
        cin >> n >> k;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                p = 0;
        cout << (k == 1 && p && n != 1 || n == 1 && k == 2 ? "YES" : "NO") << endl;
    }

    return 0;
}