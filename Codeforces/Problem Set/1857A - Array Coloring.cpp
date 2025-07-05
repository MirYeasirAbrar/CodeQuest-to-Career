#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;

    for(auto &x : a){
        cin >> x;
        sum += x;
    }

    cout << ((sum % 2 == 0) ? "YES" : "NO") << endl;
    
    }

    return 0;
}