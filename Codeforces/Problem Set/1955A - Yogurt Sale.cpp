#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n, a, b;
    cin >> n >> a >> b;
    int cost = min(n * a, (n / 2) * b + (n % 2) * a);
    cout << cost << endl;
    
    }

    return 0;
}