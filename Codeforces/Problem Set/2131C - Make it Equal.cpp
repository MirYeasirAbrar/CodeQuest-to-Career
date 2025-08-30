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
        int n, k;
        cin >> n >> k;
        map<int, int> s, p;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            s[a % k]++;
            s[k - a % k]++;
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            p[a % k]++;
            p[k - a % k]++;
        }
        cout << (p == s ? "YES" : "NO") << endl;
    }
    return 0;
}