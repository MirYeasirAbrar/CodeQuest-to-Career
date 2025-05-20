#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    set <int> s;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    cout << s.size();
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
    return 0;
}