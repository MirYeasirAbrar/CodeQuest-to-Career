#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        cout << *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()) << endl;    
    }

    return 0;
}