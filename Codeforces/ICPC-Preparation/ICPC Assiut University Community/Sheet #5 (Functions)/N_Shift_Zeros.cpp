#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    int pos = 0;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            a[pos++] = a[i];
        }
    }
    while(pos < n){
        a[pos++] = 0;
    }

    for(int i=0; i<n; i++) cout << a[i] << " ";
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();    
    return 0;
}