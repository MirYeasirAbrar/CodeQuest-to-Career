#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    string s; cin >> s;
    int flag = 0;

    for(char c : s){
        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's'){
            cout << "YES" << '\n';
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "NO" << '\n';
    }
    
   }
    return 0;
}