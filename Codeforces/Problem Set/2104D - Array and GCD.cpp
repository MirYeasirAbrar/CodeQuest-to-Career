#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 6e6;
bool isprime[10000010];
vector<int>p;
ll t, n;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
	for (int i = 2; i <= N; i++) {
		if (!isprime[i]) {
			p.push_back(i);
			for (int j = i; j <= N; j += i) isprime[j] = 1;
		}
	}
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; i++)cin >> a[i];
		sort(a.begin(), a.end(), greater<int>());
		int ans = 0;
		long long suma = 0, sump = 0;
		for (int i = 0; i < n; ++i) {
			suma += a[i];
			sump += p[i];
			if (suma >= sump) ans = i + 1;
		}
		cout << n - ans << endl;
	}
	return 0;
}