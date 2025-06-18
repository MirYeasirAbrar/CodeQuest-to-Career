#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; getline(cin, s);
    set<char> p;
 
    for(auto x : s){
        if(x >= 'a' && x <= 'z'){
            p.insert(x);
        }
    }
    cout << p.size();
    return 0;
}