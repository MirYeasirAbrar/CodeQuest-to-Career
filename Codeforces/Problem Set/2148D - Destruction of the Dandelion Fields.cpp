#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		long long sum=0;
		cin >> n;
		vector<int> ji, ou;
		for(int i=0; i<n; i++){
			int a;
			cin >> a;
			if(a%2 == 0){
				ou.push_back(a);
				sum += a;
			}
			else ji.push_back(a);
		}
		if(ji.size() == 0) cout << 0 << endl;
		else {
			sort(ji.begin(), ji.end());
			int l=0, r=ji.size()-1;
			while(l <= r){
				sum += ji[r--];
				l++;
			}
			cout << sum << endl;
		}
	}
		
	return 0; 	
}