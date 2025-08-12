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
		for (int i = 0; i < n; ++i)cin >> a[i];
		sort(a.begin(), a.end());
		if (a[0] == a[n - 1]) {
			cout << -1 << endl;
		}
		else {
			int x = 0;
			while (a[x] == a[0])x++;
			cout << x << ' ' << n - x << endl;
			for (int i = 0; i < x; ++i)cout << a[i] << ' ';
			cout << endl;
			for (int i = x; i < n; ++i)cout << a[i] << ' ';
			cout << endl;
		}
    
    }

    return 0;
}