#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int a, b, c; cin >> a >> b >> c;

    if(a!=b && a!=c){
        cout << a << '\n';
    }
    else if(b!=a && b!=c){
        cout << b << '\n';
    }
    else{
        cout << c << '\n';
    }    
    }
    return 0;
}