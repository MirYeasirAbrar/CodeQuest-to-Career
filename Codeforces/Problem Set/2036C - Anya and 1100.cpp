#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.size();
        set<int> a;
        auto up = [&](int i)
        {
            if (i >= 0 && i <= n - 4)
            {
                if (s.substr(i, 4) == "1100")
                    a.insert(i);
                else
                    a.erase(i);
            }
        };
        for (int i = 0; i < n - 3; i++)
            up(i);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            s[x - 1] = ('0' + y);
            for (int j = x - 4; j < x; j++)
                up(j);
            cout << (a.empty() ? "NO" : "YES") << endl;
        }
    }

    return 0;
}