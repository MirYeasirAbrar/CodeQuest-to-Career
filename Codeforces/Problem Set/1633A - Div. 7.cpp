#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    if(n%7 == 0) cout << n << endl;
    else{
        n -= n%10;
        while(n % 7 != 0) n++;

        cout << n << endl;
    }    
    }

    return 0;
}