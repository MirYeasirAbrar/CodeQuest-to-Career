#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    string s; cin >> s;

    if(s.find("010") != -1 || s.find("101") != -1){
        cout << "Good" << '\n';
    }
    else{
        cout << "Bad" << '\n';
    }    
   }
    return 0;
}
