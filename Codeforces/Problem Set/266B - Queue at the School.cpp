#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    long long n, t; cin >> n >> t;
    string s; cin >> s;
    while(t--){
    for(int i = 1; i < n; i++){
            if (s[i] == 'G' && s[i-1] == 'B'){
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }
    cout << s;    
    return 0;
}