#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int x, y, n;
        cin >> x >> y >> n;
        int k = (n / x) * x + y;
        if (k > n) {
            k -= x;
        }
        cout << k << endl;
    
    }

    return 0;
}