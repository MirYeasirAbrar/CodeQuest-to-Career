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
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        cout << max(a * 2, b) * max(a * 2, b) << endl;
    }

    return 0;
}