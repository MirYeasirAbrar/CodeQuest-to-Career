#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int zero = 0, one = 0;
        for (auto it : s)
            it == '0' ? zero++ : one++;
        for (auto it : s)
        {
            it == '0' ? one-- : zero--;
            if (one < 0 || zero < 0)
                break;
        }
        cout << max(one, zero) << endl;
    }

    return 0;
}