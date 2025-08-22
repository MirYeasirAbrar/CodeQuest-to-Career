#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, a, b; cin >> n >> a >> b;
		string s; cin >> s;
 
		int k = 0, x = 0, y = 0;
		while ((x != a || y != b) && (k <= 10 * 23)){
			switch (s[k++ % n]){
				case 'N':
					y++; break;
				case 'E':
					x++; break;
				case 'S':
					y--; break;
				case 'W':
					x--; break;
			}
		}
		cout << (x == a && y == b ? "YES" : "NO") << '\n';
    }    
    return 0;
}