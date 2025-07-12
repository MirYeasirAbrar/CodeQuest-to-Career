#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int x, y; cin >> x >> y;
    cout << min(x,y) << " " << max(x,y) << endl;
    
    }

    return 0;
}