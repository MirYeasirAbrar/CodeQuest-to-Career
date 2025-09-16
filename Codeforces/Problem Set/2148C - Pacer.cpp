#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while(t--){
		int n, m, in = 0;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
    int a, b;
    cin >> a >> b;
    if(a % 2 != (b + in) % 2){ 
        --m; 
        in = in ^ 1; 
        }
    }
    cout << m << endl;
	}
	return 0;
}