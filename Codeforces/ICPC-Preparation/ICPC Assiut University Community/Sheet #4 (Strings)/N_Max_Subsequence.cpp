#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    string s;
    cin >> n >> s;
    int ans = 1; 
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i-1]) ans++;
    }
    cout << ans << '\n';
    return 0;
}