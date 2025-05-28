#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; 
    cin >> s;

    for(char c : s) {
        if(c == 'H' || c == 'Q' || c == '9') {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';

    return 0;
}