#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int a[n], l[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<int> s;
    int res[n];
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(a[i]);
        res[i] = s.size();
    }
    for (int i = 0; i < m; i++)
        cin >> l[i];
    for (int i = 0; i < m; i++)
        cout << res[l[i] - 1] << endl;
    return 0;
}