#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        vector<long long> a(n); 
        for(auto &x : a) cin >> x;

        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        long long root = sqrtl(sum);
        cout << ((root * root == sum) ? "YES" : "NO") << endl;    
    }

    return 0;
}