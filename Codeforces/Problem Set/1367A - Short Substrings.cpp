#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    string a; cin >> a;

    string b;
    b += a[0];

    for(int i=1; i<a.length()-1; i+=2){
        b += a[i];
    }

    b += a[a.length()-1];
    cout << b << endl;    
    }

    return 0;
}