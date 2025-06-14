#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b, c(0), m(0);

    int t; cin >> t;
    while(t--){
    cin >> a >> b;
    c -= a;
    c += b;

    if(c > m){
        m = c;
    }    
    }

    cout << m << endl;
    return 0;
}