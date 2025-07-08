#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, k; cin >> n >> k;
    bool result = false;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x == k) result = true;
    }

    puts(result ? "YES" : "NO");
    
    }

    return 0;
}