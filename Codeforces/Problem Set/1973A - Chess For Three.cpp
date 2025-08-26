#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
		cout << ((a+b+c)%2 ? -1 : min((a+b+c)/2, a+b)) << endl;
    }    
    return 0;
}