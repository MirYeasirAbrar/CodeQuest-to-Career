#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
		if(s[n-1] == 'B' && count(s.begin(), s.end(), 'B') > 1) 
            cout << "Bob" << endl;
		else if(s[n-2]=='B' && s[0]=='B') 
            cout << "Bob" << endl;
		else 
            cout << "Alice" << endl;    
    }

    return 0;
}