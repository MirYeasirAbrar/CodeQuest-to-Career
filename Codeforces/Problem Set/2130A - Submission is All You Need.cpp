#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, tmp, ans = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp; 
        ans += tmp + (tmp == 0);}
    cout << ans << endl;
    
    }

    return 0;
}