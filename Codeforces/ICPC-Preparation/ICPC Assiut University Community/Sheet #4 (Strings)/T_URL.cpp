#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; cin >> s;
    int index = 0;
    index = s.find('?');
    s.erase(0, index+1);

    for(int i=0; i<s.size(); i++){
        if(s[i] == '='){
            s[i] = ':';
            s.insert(i+1, " ");

        }
        else if( s[i] == '&'){
            s[i] = '\n';
        }
        cout << s[i];
    }

    return 0;
}