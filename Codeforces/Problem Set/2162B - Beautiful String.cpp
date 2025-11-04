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
        string a;
        int n;
        cin >> n >> a;
        vector<int> b;
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] == '0')
                b.push_back(i);
        }
        cout << b.size() << endl;
        for (auto x : b)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}