#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    set<int> lv;

    int p, q;
    cin >> p; for(int i=0; i<p; i++){
        int x; cin >> x;
        lv.insert(x);
    }

    cin >> q; for(int i=0; i<q; i++){
        int y; cin >> y;
        lv.insert(y);
    }

    cout << ((lv.size() == n) ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}