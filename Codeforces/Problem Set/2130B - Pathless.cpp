#include <bits/stdc++.h>
using namespace std;
int t, n, a, sum, cnt[3], m;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        while (n--)
        {
            cin >> a;
            sum += a;
            cnt[a]++;
        }
        if (m < sum || m == sum + 1)
        {
            while (cnt[0]--)
                cout << "0 ";
            while (cnt[2]--)
                cout << "2 ";
            while (cnt[1]--)
                cout << "1 ";
        }
        else
            cout << -1;
        cout << '\n';
        sum = cnt[0] = cnt[1] = cnt[2] = 0;
    }
    return 0;
}
