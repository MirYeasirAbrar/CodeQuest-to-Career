#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;

    string s; cin >> s;
    
    int d = 0, a = 0;

    for(char c : s){
        if(c == 'A'){
            a++;
        }
        else if(c == 'D'){
            d++;
        }
    }


    if(d > a){
        cout <<  "Danik" << '\n';
    }
    else if(a > d){
        cout << "Anton"  << '\n';
    }
    else{
        cout << "Friendship" << '\n';
    }

    return 0;
}