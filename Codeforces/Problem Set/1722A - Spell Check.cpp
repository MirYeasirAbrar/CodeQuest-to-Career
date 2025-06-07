#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s = "Timur";
    sort(s.begin(), s.end());

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        sort(str.begin(), str.end());

        cout << (s == str ? "YES" : "NO") << endl;
    }

    return 0;
}