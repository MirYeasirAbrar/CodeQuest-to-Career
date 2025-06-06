#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string str; cin >> str;
    string s1 = "", s2 = str, s = str;

    for(int i=0; i<str.size(); i++){
        s1 += str[i];
        s2.erase(0, 1);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        s = min(s, s1+s2);
    }    
    // sort(s.begin(), s.end());

    cout << s << endl;
    return 0;
}