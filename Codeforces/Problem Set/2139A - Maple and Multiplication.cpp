#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while(t--){
		int a, b;
        cin >> a >> b;
        cout << bool(a % 2) + bool(b % 2) << endl;  
	}
	return 0;
}