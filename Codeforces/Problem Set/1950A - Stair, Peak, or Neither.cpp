#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        if(a < b && b < c) cout << "STAIR" << endl;
        else if(a < b && b > c) cout << "PEAK" << endl;
        else cout << "NONE" << endl;    
    }

    return 0;
}