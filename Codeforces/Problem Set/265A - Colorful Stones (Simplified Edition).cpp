#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s, t; cin >> s >> t;
    int count = 0;
    for(int i=0; i<t.length(); i++){
        if(s[count] == t[i]) 
            count++;
    }
    cout << count+1;
    return 0;
}