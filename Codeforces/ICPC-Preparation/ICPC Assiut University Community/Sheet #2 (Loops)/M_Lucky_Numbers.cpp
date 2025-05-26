#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b; cin >> a >> b;
    bool found = false;
    for(int i = a; i <= b; i++) {
        string s = to_string(i);
        bool lucky = true;
        for(char c : s) {
            if(c != '4' && c != '7') {
                lucky = false;
                break;
            }
        }
        if(lucky) {
            cout << i << " ";
            found = true;
        }
    }
    if(!found) cout << -1;
    return 0;
}