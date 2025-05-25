#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s1, s2; cin >> s1 >> s2;

    for(int i=0; i<s1.size(); i++){
        if(s1[i] == s2[i]){
            cout << "0";
        }
        else{
            cout << "1";
        }
    }

    return 0;
}