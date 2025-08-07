#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n, x;
        vector<int> a(n);
        int f[2];
        f[0] = f[1] = 0;
    	cin >> n >> x;
    	for(int i = 1; i <= n; i++)
    	{
    		cin >> a[i];
    		f[a[i] % 2]++;
    	}
    	bool flag = 0;
    	for(int i = 1; i <= f[1] && i <= x; i += 2) //Fix no of odd
    	{
    		int have = f[0], need = x - i;
    		if(need <= f[0])
    	        flag = 1;
    	}
    cout << (flag ? "Yes" : "No") << endl;    
    }
    return 0;
}