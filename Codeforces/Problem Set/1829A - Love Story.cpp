#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    string n; cin >> n;
    string s = "codeforces";
    int count = 0;
    for(int i=0; i<n.size(); i++){
        if(n[i] != s[i]) count++;
    }
    cout << count << endl;
    }

    return 0;
}