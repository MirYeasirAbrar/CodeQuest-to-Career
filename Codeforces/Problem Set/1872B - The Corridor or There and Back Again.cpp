#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        int m = INT_MAX;
        for(int i=0; i<n; i++){
            int d, s; cin >> d >> s;
            m = min(m, d+(s-1)/2);
        }
        cout << m << endl;
    }    
    return 0;
}