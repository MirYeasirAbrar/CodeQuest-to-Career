#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> pts = {x, y, z};
        sort(pts.begin(), pts.end());
        int median = pts[1];
        int total = abs(x - median) + abs(y - median) + abs(z - median);
        cout << total << endl;
    }

    return 0;
}