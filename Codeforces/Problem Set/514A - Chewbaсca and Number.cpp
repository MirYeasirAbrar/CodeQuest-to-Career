#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= '5' && s[i] <= '9'){
            if(i == 0 && s[i] == '9') continue;
            s[i] = '0' + '9' - s[i];
        }
    }

    cout << s << endl;
    return 0;
}