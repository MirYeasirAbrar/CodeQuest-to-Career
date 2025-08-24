#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; string s;
        cin >> n >> s;
		int x = 0, y = 0;
		for(int i=0; i<s.size(); i++)
			if(s[i] == '1') x++;
			else if(!i || s[i] != s[i-1]) y++;
		puts(x>y ? "Yes" : "No");
    }    
    return 0;
}