#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s = "aeiou";
        for(int i=0; i<5; i++) cout << string(n/5+(n%5>i) ,s[i]);
        cout << endl;
    }    
    return 0;
}