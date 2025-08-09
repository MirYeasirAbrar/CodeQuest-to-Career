#include <bits/stdc++.h>
using namespace std;
string s[5000];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin >> s[i];
	}
	for(int i=n;i>=1;i--){
		cout << s[i].find("#")+1 << " ";
	}
    cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
