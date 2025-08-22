#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int x, y, k; cin >> x >> y >> k;
        int c = min(x,y);
        printf("0 0 %d %d\n",c,c);
		printf("%d 0 0 %d\n",c,c);
    }    
    return 0;
}