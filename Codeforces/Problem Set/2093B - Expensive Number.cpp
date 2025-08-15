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
        int q = 0, w = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > '0')
            {
                q = i, w++;
            }
        }
        cout << s.size() - q + w - 2 << endl;
    }

    return 0;
}