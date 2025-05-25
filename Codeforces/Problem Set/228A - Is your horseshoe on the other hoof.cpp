#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int a, b, c, d; cin >> a >> b >> c >> d;
    
    set<int> s = {a,b,c,d};
    int cnt = 4 - s.size();

    cout << cnt << '\n';
    return 0;
}