#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; cin >> s;

    while(1){
        if(s.find("EGYPT") != -1){
           int index = s.find("EGYPT");
           s.replace(index, 5, " ");
        }
        else{
            break;
        }
    }
    cout << s << '\n';
    return 0;
}