#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    int a[n + 1];
    a[0] = 1;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a, a + n + 1);
    cout << ((a[k] != a[k + 1]) ? a[k] : -1);

    return 0;
}