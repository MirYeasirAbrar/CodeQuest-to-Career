#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    map<string, int> mp;

    for(int i=0; i<n; i++){
        string s; 
        cin >> s;

        if(mp.count(s) == 0 ){
            cout << "OK";
            mp[s] = 1;
        }
        else{
            cout << s << mp[s];
            mp[s] += 1; 
        }
        cout << endl;
    }
    return 0;
}