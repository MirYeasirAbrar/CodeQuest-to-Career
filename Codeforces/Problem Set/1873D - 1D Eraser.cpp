#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int operations = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            operations++;
            i += k - 1; 
        }
    }
    cout << operations << endl;
    
    }

    return 0;
}