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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &y : b) cin >> y;
        bool pos = a.back() == b.back();
        for (int i = 0; i < n - 1; ++i)
            pos &= (a[i] == b[i]) | ((a[i] ^ a[i + 1]) == b[i]) | ((a[i] ^ b[i + 1]) == b[i]);
        cout << (pos ? "YES" : "NO") << endl;
    }
    return 0;
}