#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; cin >> s;
    bool first = true;
    for (size_t i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 3;
        } else {
            if (!first) cout << " ";
            first = false;
            while (i < s.size() && !(i + 2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')) {
                cout << s[i];
                i++;
            }
        }
    }
    return 0;
}