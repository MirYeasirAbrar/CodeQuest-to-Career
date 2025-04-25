#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        string s, t, result = "";
        cin >> s >> t;
        int minLen = min(s.length(), t.length());

        for (int i = 0; i < minLen; i++) {
            result += s[i];
            result += t[i];
        }

        result += s.substr(minLen) + t.substr(minLen);

        cout << result << endl;
        

   }
    return 0;
}