#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while(t--){
		int n, x = 0; cin >> n; 
        for(int i=0;i<n;i++) {
            int y; cin >> y; 
            x += y;
        }
		cout << (x%3? "0 0": "1 2") << endl;
	}
	return 0;
}