#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    ll a = 0, b = 0, c = 0, x;
    for (int i = 0; i < n; i++)
        cin >> x, a += x;
    for (int i = 0; i < n - 1; i++)
        cin >> x, b += x;
    for (int i = 0; i < n - 2; i++)
        cin >> x, c += x;
    cout << a - b << "\n"
         << b - c;
    return 0;
}