#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    long long int n, m, x, y = 1, sum = 0;
     cin >> n >> m;

     for(int i=0; i<m; i++){
        cin >> x; 
        (x >= y) ? (sum = sum + x - y) : (sum = sum + n + x - y);

        y = x;
     }
     cout << sum << endl;
    return 0;
}