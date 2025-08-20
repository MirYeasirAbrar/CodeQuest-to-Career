#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n, s = 0;
        string a; cin >> n >> a;
        while(n && a[n-1] == 'A') n--;
		while(s <= a.size() - 1 && a[s] == 'B') s++;
		cout << max(n-s-1, 0) << endl;
    }    
    return 0;
}