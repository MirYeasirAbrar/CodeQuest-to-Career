#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int a, b, c; cin >> a >> b >> c;

    if(a+b == c){
        cout << '+' << '\n';
    }
    else if(a-b == c){
        cout << '-' << '\n';
    }
    
   }


    return 0;
}