#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int dict[128] = {0};
    string s; cin >> s;
    for (size_t i = 0; i < s.length(); ++i){
        dict[s[i]] += 1;
    }
    cin >> s;
    for (size_t i = 0; i < s.length(); ++i){
        dict[s[i]] += 1;
    }
    cin >> s;
    for (size_t i = 0; i < s.length(); ++i){
        dict[s[i]] -= 1;
    }

    cout << ((count(dict, dict + sizeof(dict) / sizeof(dict[0]), 0) == sizeof(dict) / sizeof(*dict)) ? "YES" : "NO") << endl;
    
    return 0;
}