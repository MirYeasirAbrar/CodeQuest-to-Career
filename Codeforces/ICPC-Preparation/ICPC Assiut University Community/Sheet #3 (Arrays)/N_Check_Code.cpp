#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b; cin >> a >> b;
    string s; cin >> s;

    bool ok = (s.size() == a + b + 1) && (s[a] == '-');
    for(int i = 0; i < s.size(); ++i) {
        if(i == a) continue;
        if(!isdigit(s[i])) ok = false;
    }

    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}