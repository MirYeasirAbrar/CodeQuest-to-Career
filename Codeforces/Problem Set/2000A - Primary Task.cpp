#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        string x; cin >> x;
        bool res = (x.size() > 2) && (x[0] == '1') && (x[1] == '0') && (x[2] != '0') && (x != "101");
        cout << (res ? "YES" : "NO") << endl;
    
    }

    return 0;
}