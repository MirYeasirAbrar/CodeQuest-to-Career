#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int count = n/k;
        for(int i=1; i<=n; i++)
            cout << ((i%k) ? ++count : i/k) << " ";   
        cout << endl;     
    }
    return 0;
}