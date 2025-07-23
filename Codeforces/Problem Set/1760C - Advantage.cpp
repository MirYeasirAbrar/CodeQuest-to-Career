#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n), cp(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        cp = v;
        sort(cp.begin(), cp.end(), greater<>());

        for(int i = 0; i < n; i++)
        {
            if(v[i] == cp[0])
            {
                cout << v[i] - cp[1] << ' ';
                continue;
            }
            cout << v[i] - cp[0] << ' ';
        }
        cout << '\n';
    
    }

    return 0;
}