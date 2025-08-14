#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n, x, cnt = 0; cin >> n >> x;
		for (int i=2; i<=n; i++){
			int k; cin>>k;
			cnt += (abs(k) >= abs(x));
		}
		cout << (cnt >= (n-1)/2 ? "YES" : "NO") << endl;
    }
    return 0;
}