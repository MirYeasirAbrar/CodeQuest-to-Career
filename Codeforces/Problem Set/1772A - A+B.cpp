#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    string s; cin >> s;
    string x;
    for(char c : s){
        if(c != '+') x += c;
    }  
    int res = stoi(x);
    int sum = 0;
    while(res!=0){
        int rem = res % 10;
        sum += rem;
        res /= 10;
    }
    cout << sum << endl;

    }
    return 0;
}