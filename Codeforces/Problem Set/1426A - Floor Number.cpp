#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, x;
    cin >> n >> x;
    int ans = 1;
    for(int i=3; i<=n;){
        i += x;
        ans++;
    }
    cout << ans << endl;
    
    }

    return 0;
}