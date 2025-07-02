#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    long long n, k;
    cin >> n >> k;

    long long div = k / (n-1);
    long long ex = k % (n-1);
    long long ans = n * div;

    ex == 0 ? ans-- : ans += ex;
    cout << ans << endl;    
    }

    return 0;
}