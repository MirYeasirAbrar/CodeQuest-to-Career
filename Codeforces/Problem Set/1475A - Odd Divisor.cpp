#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    long long n; cin >> n;

    if (n & (n - 1)) {
            cout << "YES\n";
    } 
    else {
            cout << "NO\n";
    }    
    }
    return 0;
}