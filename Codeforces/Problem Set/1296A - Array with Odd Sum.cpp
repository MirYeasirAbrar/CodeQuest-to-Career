#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int odd_count = 0;
        int even_count = 0;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            if (num % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        if (odd_count > 0 && (odd_count % 2 != 0 || even_count > 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    
    }

    return 0;
}