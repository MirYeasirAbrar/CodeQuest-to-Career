#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int n, a, c, x, m, r = -1;
int main()
{
    for (cin >> n; n--;)
        cin >> a, c += a, x += 1 - a * 2, r = max(r, x - m), m = min(x, m);
    cout << r + c;
}
