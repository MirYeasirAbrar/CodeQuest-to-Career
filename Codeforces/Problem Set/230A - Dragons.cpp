#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<pair<int, int>> pa;
    int s, n; cin >> s >> n;
    int can = 1;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        pa.push_back(make_pair(x, y));
    }

    sort(pa.begin(), pa.end());

    for(int i = 0; i < n; i++){
        if(s > pa[i].first) {
            s += pa[i].second;
        }
        else {
            can = 0;
            break;
        }
    }
    cout << ((can == 1) ? "YES" : "NO") << endl;
    return 0;
}