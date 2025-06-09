#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    char c; cin >> c;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int n = s1.size();
    string s2; cin >> s2;
    string ans = "";

    for(int i = 0; i < s2.size(); i++) {
        for(int j = 0; j < n; j++) {
            if(s2[i] == s1[j]) {
                if(c == 'L') ans += s1[j+1];
                else ans += s1[j-1];
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}