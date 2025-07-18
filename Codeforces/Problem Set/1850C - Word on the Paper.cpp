#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        string s;
		string ans;
		for(int i = 0; i < 8; ++i){
			cin >> s;
			for(int j = 0; j < 8; ++j){
				if(s[j] != '.') ans.push_back(s[j]);
			}
		}
		cout << ans << endl;
    
    }

    return 0;
}