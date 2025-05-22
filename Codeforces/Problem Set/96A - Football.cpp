#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; cin >> s;
    
    int zero = 0, one = 0;

    for(char c : s){
        if(c == '1'){
            zero = 0;
            one++;
        }
        else if(c == '0'){
            one = 0;
            zero++;
        }
        
        if(zero >= 7 || one >= 7){
        cout <<  "YES" << '\n';
        return 0;
        }
    }


    cout << "NO" << '\n';
    return 0;

    return 0;
}