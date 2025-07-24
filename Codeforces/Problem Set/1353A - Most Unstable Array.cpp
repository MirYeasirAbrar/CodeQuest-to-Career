#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, m; 
        cin >> n >> m; 
        if (n == 1) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << m << endl; 
        } else {
            cout << 2 * m << endl;
        }
    
    }

    return 0;
}