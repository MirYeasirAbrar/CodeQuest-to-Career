#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, k;
    cin >> t;
    while (cin >> x >> y >> k)
        cout << max(2 * ((x + k - 1) / k) - 1, 2 * ((y + k - 1) / k)) << endl;
}