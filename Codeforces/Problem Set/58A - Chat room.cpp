#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s, str; cin >> s; 
    str = "hello";
    int k = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == str[k]) k++;
    }

    cout << ((k == str.size()) ? "YES" : "NO") << endl;
    return 0;
}