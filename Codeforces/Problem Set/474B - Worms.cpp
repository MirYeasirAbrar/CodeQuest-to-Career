#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int n, a[1000001], i, x = 1, p;
int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> p;
        while (p--)
        {
            a[x] = i;
            x++;
        }
    }
    cin >> n;
    while (n--)
    {
        cin >> p;
        cout << a[p] << endl;
    }
}