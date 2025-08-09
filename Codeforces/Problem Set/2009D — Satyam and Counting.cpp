#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
	vector<int> x(n),y(n);
	vector vis(n+1,array<int,2>{});
	int cnt[2]{};
	for(int i = 0;i < n;i++){
		cin >> x[i] >> y[i];
		cnt[y[i]]++;
		vis[x[i]][y[i]] = 1;
	}
	ll ans = 0;
	for(int i=0;i<n;i++){
		if(vis[x[i]][1-y[i]]){
			ans += cnt[y[i]] - 1;
		}
		if(x[i]>0 && x[i]<n && vis[x[i]-1][1-y[i]] && vis[x[i]+1][1-y[i]]){
			ans++;
		}
	}
	cout<< ans << endl;
    
    }

    return 0;
}