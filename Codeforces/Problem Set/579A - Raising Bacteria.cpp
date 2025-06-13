#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    int ans = 0;
    while(n){
        if(n&1) ans++;
        n>>=1;
    }
    cout << ans << endl;
    return 0;
}