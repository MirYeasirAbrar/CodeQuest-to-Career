#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int x, len;
    cin >> x;
    len = to_string(x).length();
    cout << ((x % 10) - 1) * 10 + (len * (len + 1) / 2) << "\n";
    
    }

    return 0;
}