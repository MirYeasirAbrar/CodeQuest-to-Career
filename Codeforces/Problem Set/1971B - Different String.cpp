#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        string s; cin>> s;
        bool diff(false);
        for(long p = 1; !diff && p < s.size(); p++){
            if(s[p - 1] == s[p]){continue;}
            char c = s[p - 1]; s[p - 1] = s[p]; s[p] = c;
            diff = true;
        }

        if(diff){cout << "YES\n" << s << endl;}
        else{cout << "NO" << endl;}
    
    }

    return 0;
}