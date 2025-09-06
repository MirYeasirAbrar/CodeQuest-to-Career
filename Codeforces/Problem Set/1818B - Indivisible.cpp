#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        if (n==1) cout << 1 << endl;
		else if (n%2==1) cout << -1 << endl;
		else {
			for (int i=1; i<=n/2; i++) {
				cout << 2*i << " " << 2*i-1 << " ";
			}
			cout << endl;
        }
    }    
    return 0;
}