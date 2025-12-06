#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

short a[101], b[101], i, j, k, l, n;
int main()
{
    for (cin >> n; n--; cin >> i, ++a[i]);
    for (cin >> n; n--; cin >> i, ++b[i]);
    for (i = 1; i < 101; ++i)
        if (a[i])
            for (j = i - 1; j < i + 2 && a[i]; ++j)
                if (k = min(a[i], b[j]), k)
                    l += k, b[j] -= k, a[i] -= k;
    return cout << l, 0;
}