#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end());
    int cnt = 0;
    
    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i] > 1){
            cnt = 1;
            break;
        }
    }

    cout << ((cnt == 0) ? "YES" : "NO") << endl;    
    }
    return 0;
}