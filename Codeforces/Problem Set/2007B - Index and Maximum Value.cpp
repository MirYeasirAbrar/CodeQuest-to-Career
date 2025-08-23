#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m; 
        int ma = 0;
		for(int i=0;i<n;i++){
			int k; cin >> k;
			ma = max(ma, k);
		}
		for(int i=0;i<m;i++){
			char s;
			int l, r;
			cin >> s >> l >> r;
			if(i > 0) cout << ' ';
			if(ma >= l && ma <= r){
				if(s == '-') ma--;
				else ma++;
			}
			cout << ma;
		}
		cout << endl;
    }    
    return 0;
}