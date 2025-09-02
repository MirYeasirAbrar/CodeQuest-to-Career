#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        int i = 1;
        while (n % i == 0)
            i++;
        cout << i - 1 << endl;
    }    
    return 0;
}