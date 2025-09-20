#include<bits/stdc++.h>
using namespace std;
int t,n;
const int N=2e5+10;

int main(){
	cin >> t;
	while(t--){
		cin >> n;
		vector<vector<int>> g(n+1);
		vector<int> ans(n+1);
		for(int i=1;i<=n;i++){
			int x;cin>>x;
			g[x].push_back(i);
		}
		int cnt = 0;
		bool flag = true;
		for(int i = 1; i <= n; i++){
			if(g[i].size() % i != 0){
				cout << "-1\n";
				flag = false;
				break;
			}
			else{
				for(int j=0;j<g[i].size();j++){
					if(j%i==0) cnt++;
					ans[g[i][j]] = cnt;
				}
			}
		}
		if(flag){
			for(int i=1;i<=n;i++){
				cout << ans[i] << " ";
			}
			cout << "\n";
		}
	}
}