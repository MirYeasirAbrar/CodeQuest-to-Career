#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool flag = true;
        for(int i=1; i<=n; i++){
            int a; cin >> a;
            if(abs(i-a) > 1) flag = false;
        }

        puts(flag ? "YES" : "NO");
    }    
    return 0;
}