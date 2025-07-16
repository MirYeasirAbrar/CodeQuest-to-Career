#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    string s; cin >> s;
    char c = 'a';
    for (int i = 0; i < n; i++){
        if (s[i] > c)
            c = s[i];
    }
    cout << abs(97 - c) + 1 << endl;
    
    }

    return 0;
}