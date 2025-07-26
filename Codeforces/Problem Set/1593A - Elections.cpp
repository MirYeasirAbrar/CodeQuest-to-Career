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
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(0, max(b, c) - a + 1) << " " << max(0, max(a, c) - b + 1) << " " << max(0, max(a, b) - c + 1) << endl;
    }

    return 0;
}