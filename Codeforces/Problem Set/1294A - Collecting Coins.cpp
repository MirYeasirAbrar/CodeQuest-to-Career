#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int sum = a + b + c + n;
        if (sum % 3 == 0 && sum / 3 >= a && sum / 3 >= b && sum / 3 >= c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    
    }

    return 0;
}