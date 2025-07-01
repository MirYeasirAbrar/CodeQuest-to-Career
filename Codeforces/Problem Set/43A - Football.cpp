#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    map<string, int> tg;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        tg[s]++;
    }
    string win;
    int mg = 0;
    for(const auto &pair : tg){
        if(pair.second > mg){
            mg = pair.second;
            win = pair.first;
        }
    }
    cout << win << endl;
    return 0;
}