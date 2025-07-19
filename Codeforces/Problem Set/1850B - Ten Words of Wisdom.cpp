#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    ll n;
    cin >> n;

    ll currWinner = 0, pos = 0;

    for (int i = 0; i < n; i++)
    {
        ll m, q;
        cin >> m >> q;

        if (m <= 10)
        {
            if (q > currWinner)
            {
                currWinner = q;
                pos = i + 1;
            }
        }
    }

    cout << pos << endl;;
    
    }

    return 0;
}