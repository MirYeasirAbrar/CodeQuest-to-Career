#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n,j; cin >> n;
		vector<int> a(n+1, 0);
		for(int i=1; i<=n; i++){
			cin >> j;
			a[j]++;
		}
		int flag = 0;
		for(int i=1; i<=n; i++){
			if(a[i]%2 == 1){
				flag = 1;
				break;
			}
		}
		cout << (flag ? "YES" : "NO") << endl;
    }    
    return 0;
}