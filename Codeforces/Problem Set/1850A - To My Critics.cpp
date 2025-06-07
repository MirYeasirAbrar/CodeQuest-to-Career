#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int a, b, c; cin >> a >> b >> c;

    if(a+b >= 10) cout << "YES" << endl;
    else if(a+c >= 10) cout << "YES" << endl;
    else if(c+b >= 10) cout << "YES" << endl;
    else cout << "NO" << endl;    
    }

    return 0;
}