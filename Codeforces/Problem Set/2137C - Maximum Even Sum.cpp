#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        t--;
        long long a, b, x;
        cin >> a >> b;
        if (b % 2 == 0)
            x = a * (b / 2) + 2;
        else
            x = a * b + 1;
        if (x & 1)
            cout << -1 << endl;
        else
            cout << x << endl;
    }
}