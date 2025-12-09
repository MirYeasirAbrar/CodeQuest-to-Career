#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ll a, n, sum, b, c;
    cin >> a;
    while (a--)
    {
        cin >> n;
        sum = 0;
        cin >> b;
        n--;
        while (n--)
        {
            cin >> c;
            if (b * c > 0)
            {
                if (c > b)
                    b = c;
            }
            else
            {
                sum += b;
                b = c;
            }
        }
        cout << sum + b << endl;
    }
}