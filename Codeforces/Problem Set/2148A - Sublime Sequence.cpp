#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while(t--){
		int x, n;
		cin >> x >> n;
		cout << (n % 2 ? x : 0) << endl;
	}
	return 0;
}