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
        string s1, s2;
        cin >> s1 >> s2;
        int p = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '?')
            {
                if (p == s2.length())
                    s1[i] = 'a';
                else
                    s1[i] = s2[p++];
            }
            else
            {
                if (s1[i] == s2[p])
                    p++;
            }
        }
        if (p == s2.length())
            cout << "YES" << endl
                 << s1 << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}