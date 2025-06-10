#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int h, m; cin >> h >> m;
    cout << 1440 - ((h*60) + m) << endl;    
    }

    return 0;
}