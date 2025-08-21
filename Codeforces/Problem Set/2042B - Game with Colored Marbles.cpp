#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin>>n;
		int freq[n+1] = {0};
		for (int i=0;i<n;i++){
			int x; cin >> x;
			freq[x]++;
		}
		int count=0,ans=0;
		for (int i=1;i<=n;i++){
			count += freq[i] == 1;
			ans += freq[i]>0;
		}
		cout << ans+(count&1) << endl;
    }    
    return 0;
}