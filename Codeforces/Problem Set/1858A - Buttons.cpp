#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    long long a, b, c; cin >> a >> b >> c;
    cout << ((a + (c % 2) > b) ? "First" : "Second") << endl;    
    }
    return 0;
}