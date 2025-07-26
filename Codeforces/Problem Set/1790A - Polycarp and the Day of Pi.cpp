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
        string s;
        cin >> s;
        string pi = "314159265358979323846264338327";
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == pi[i])
                c++;
            else
                break;
        }
        cout << c << endl;
    }

    return 0;
}