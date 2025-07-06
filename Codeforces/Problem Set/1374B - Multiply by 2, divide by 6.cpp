#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int count = 0;
        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
            } else if (n % 3 == 0) {
                n *= 2;
            } else {
                count = -1;
                break;
            }
            count++;
        }
        cout << count << endl;
    
    }

    return 0;
}