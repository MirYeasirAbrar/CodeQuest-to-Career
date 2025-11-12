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
        int n;
        cin >> n;
        vector<int> a;
        map<int, int> b;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a.push_back(b[x]);
            b[x] = i;
            ;
        }
        int m;
        cin >> m;
        while (m--)
        {
            string str;
            cin >> str;
            map<int, int> d;
            vector<int> c;
            for (int i = 0; i < str.length(); i++)
            {
                c.push_back(d[str[i]]);
                d[str[i]] = i + 1;
            }
            if (a == c)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}