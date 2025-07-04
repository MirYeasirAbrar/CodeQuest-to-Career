#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    vector<int> a(4);
    for(auto &x : a) cin >> x;
    int result=0;

    string s;
    cin >> s;
    int len = s.length();

    for(int i=0;i<len;i++){
        int z = s[i] - '0';
        result += a[z - 1];       
    }
    cout << result;
    return 0;
}