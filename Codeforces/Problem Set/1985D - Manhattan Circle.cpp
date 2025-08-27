#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        ll n, m, si, sj, cnt;
        si = 0, sj = 0, cnt = 0;
		cin >> n >> m;
		for(int i = 1; i <= n; i ++)
			for(int j = 1; j <= m; j ++){
                char c;
				cin >> c;
				if(c == '#'){
					si += i;
					sj += j;
					cnt ++;
				}
			}
		cout << si/cnt << ' ' << sj/cnt << endl;
    }    
    return 0;
}