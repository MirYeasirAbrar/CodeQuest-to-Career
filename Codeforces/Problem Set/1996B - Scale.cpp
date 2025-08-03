#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, k; cin >> n >> k;

    char a[n][n];

    for(auto &x : a){
        for(auto &c : x){
            cin >> c;
        }
    }

    for(int i=0; i<n; i+=k){
        for(int j=0; j<n; j+=k){
            cout << a[i][j];
        }
        cout << endl;
    }    
    }
    return 0;
}