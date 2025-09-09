#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

long long l, r; 
long long f(int x){
	return r/x - (l - 1)/x;	
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        cin >> l >> r;
	cout << r-l+1-f(2)-f(3)-f(5)-f(7)+f(6)+f(10)+f(14)+f(15)+f(21)+f(35)-f(30)-f(42)-f(70)-f(105)+f(210) << endl;

    }    
    return 0;
}