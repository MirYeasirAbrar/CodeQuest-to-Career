#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        stack<char> a;
        int cnt = 0;
        for (auto c : s){
            if (a.empty())
                ++cnt;
            if (c == ')')
                a.pop();
            else
                a.push(c);
        }
        puts(cnt > 1 ? "YES" : "NO");
    }

    return 0;
}