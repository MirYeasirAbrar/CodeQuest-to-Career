#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    bool flag = true;
    for(int i=1; i<n; i++){
        if(abs(a[i] - a[i-1]) != 5 && abs(a[i] - a[i-1]) != 7)
            flag = false;
    }
    cout << (flag ? "YES" : "NO") << endl;    
    }

    return 0;
}