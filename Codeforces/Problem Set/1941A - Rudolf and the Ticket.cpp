#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, m, k;
		cin >> n >> m >> k;
		int ans = 0;
		vector<int> v1(n);
		for (int i = 0; i < n; i++) {
			cin >> v1[i];
		}
		int o;
		for (int j = 0; j < m; j++) {
			cin >> o;
			for (int i = 0; i < n; i++) {
				if ((o + v1[i]) <= k) ans++;
			}
		}
		cout << ans << endl;
    
    }

    return 0;
}