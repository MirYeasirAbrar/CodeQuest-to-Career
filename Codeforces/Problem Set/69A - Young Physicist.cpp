#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a = 0, b = 0, c = 0, x, y, z;
    int t; cin >> t;
    while(t--){
    cin >> x >> y >> z;
    a += x;
    b += y;
    c += z;    
    }
    cout << ((a == 0 && b == 0 && c == 0) ? "YES" : "NO") << endl;
    return 0;
}