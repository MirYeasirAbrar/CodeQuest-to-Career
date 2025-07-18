#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        deque<ll> d(n);
        for (auto &i : d)
            cin >> i;
        d.push_front(0);
        d.push_back(x);

        ll Max = 0;
        for (int i = 1; i <= n + 1; ++i)
        {
            Max = max(Max, (i == n + 1) ? 2 * (d[i] - d[i - 1]) : d[i] - d[i - 1]);
        }
        cout << Max << '\n';
    
    }

    return 0;
}