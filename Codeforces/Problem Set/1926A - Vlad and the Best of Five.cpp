#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    string s; cin >> s;
    int c1 = 0, c2 = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A') c1++;
        else c2++;
    }

    cout << ((c1>c2) ? "A" : "B") << endl; 
    
    }

    return 0;
}