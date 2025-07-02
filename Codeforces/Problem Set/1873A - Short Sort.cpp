#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    string s; cin >> s;
    cout << ((s == "abc" || s == "bac" || s == "cba" || s == "acb") ? "YES" : "NO") << endl;    
    }

    return 0;
}