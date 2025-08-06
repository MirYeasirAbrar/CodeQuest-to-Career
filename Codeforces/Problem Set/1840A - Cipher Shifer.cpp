#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    string s; cin >> s;
    int i = 0;
    while(i < n){
        int st = i;
        cout << s[i++];
        while(s[i++] != s[st]);
    }
    cout << endl;
    }

    return 0;
}