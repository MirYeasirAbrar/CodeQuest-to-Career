#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int lp = 0;
        for (int i = n / 2; i < n; i++)
        {
            lp += pow(2, i);
        }
        int rp = pow(2, n);
        for (int i = 1; i < n / 2; i++)
        {
            rp += pow(2, i);
        }
        cout << abs(lp - rp) << endl;
    }

    return 0;
}