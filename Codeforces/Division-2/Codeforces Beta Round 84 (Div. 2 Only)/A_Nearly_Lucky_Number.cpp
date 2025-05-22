#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    long long n; cin >> n;

    string s = to_string(n); 
    int digit = 0;

    for(char c : s){
        if(c == '4' || c == '7'){
            digit++;
        }
    }

    string k = to_string(digit);

    bool flag = true;
    for(char c : k){
        if(c != '4' && c != '7'){
            flag = false;
        }
    }

    if(flag == true){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }

    return 0;
}