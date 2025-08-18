#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int count = 0;
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<int> a(26,0);
        for(auto x : s) a[x-'a']++;
        for(auto x : a) if(x%2 == 1) count++;

        cout << ((k >= count-1) ? "YES" : "NO") << endl;
    }    
    return 0;
}