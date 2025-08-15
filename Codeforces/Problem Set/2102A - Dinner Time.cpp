#include <bits/stdc++.h>
using namespace std;
int n, m, p, q, k, r;
main()
{
    cin >> n;
    while (cin >> n >> m >> p >> q)
        k = n / p, r = n % p, cout << ((r == 0 && m != k * q) ? "NO" : "YES") << '\n';
}