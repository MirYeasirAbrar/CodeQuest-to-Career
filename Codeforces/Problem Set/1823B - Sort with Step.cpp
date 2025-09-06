#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
		int cnt = 0;
		for (int x, i = 0; i < n; i++){
			cin >> x; x--;
			if (x % k != i % k) cnt++;
		}
		cout << (cnt == 0 ? 0 : cnt == 2 ? 1 : -1) << '\n';
    }    
    return 0;
}