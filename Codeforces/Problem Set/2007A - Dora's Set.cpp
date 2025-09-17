#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while(t--){
		int l,r; cin >> l >> r;
        cout << ((r+1)/2 - l/2)/2 << endl;
	}
	return 0;
}