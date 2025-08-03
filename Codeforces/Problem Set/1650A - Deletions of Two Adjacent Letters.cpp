#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        string s, c; cin >> s >> c;
        bool flag = false;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == c[0] && i % 2 == 0){
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;    
    }

    return 0;
}