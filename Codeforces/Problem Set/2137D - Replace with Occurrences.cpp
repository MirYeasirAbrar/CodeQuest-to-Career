#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        map<int, int> mp;
        map<int, vector<int>> pos;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            pos[a[i]].push_back(i);
        }
        for (auto &i : mp)
        {
            if (i.second % i.first)
            {
                cout << "-1\n";
                break;
            }
        }
        map<int, int> x, y;
        vector<int> ans(n);
        int cur = 1;
        for (int i = 0; i < n; i++)
        {
            if (x[a[i]] == 0)
            {
                y[a[i]] = cur++;
                x[a[i]] = a[i];
            }
            ans[i] = y[a[i]];
            x[a[i]]--;
        }
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
}