#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        set<pair<int, int>> st1, st2;
        int dx[8] = {-a, a, -a, a,-b, b, -b, b}, dy[8] = {-b, -b, b, b,-a, -a, a, a};
        for(int j = 0; j < 8; j++){
            st1.insert({x1+dx[j], y1+dy[j]});
            st2.insert({x2+dx[j], y2+dy[j]});
        }
        int ans = 0;
        for(auto x : st1)
            if(st2.find(x) != st2.end())
                ans++;
        cout << ans << endl;
    }    
    return 0;
}