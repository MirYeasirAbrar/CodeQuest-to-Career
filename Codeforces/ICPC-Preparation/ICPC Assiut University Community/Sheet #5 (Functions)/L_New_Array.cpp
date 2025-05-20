#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    vector<int> c(2*n);
    for(int i=0; i<n; i++){
        c[i] = b[i];
    }
    for(int i=0; i<n; i++){
        c[n + i] = a[i];
    }

    for(int i=0; i<2*n; i++) cout << c[i] << " ";
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
    return 0;
}