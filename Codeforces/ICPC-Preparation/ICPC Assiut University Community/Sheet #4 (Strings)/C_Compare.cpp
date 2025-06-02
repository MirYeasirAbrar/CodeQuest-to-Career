#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s1, s2;
    cin >> s1 >> s2;

    if(s1 <= s2){
        cout << s1 << endl;
    }
    else{
        cout << s2 << endl;
    }
    
    return 0;
}