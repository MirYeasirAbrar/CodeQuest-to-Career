#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string str; cin >> str;
    string s = str;

    for(int i = 1; i < str.size(); i++) {
        string s1 = str.substr(0, i);
        string s2 = str.substr(i);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        s = min(s, s1 + s2);
    }

    cout << s << endl;
    return 0;
}