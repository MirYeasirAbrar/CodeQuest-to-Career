#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m, k; 
    cin >> n >> m >> k;

    int f1 = 0, f2 = 0;
    if(n<=m) f1 = 1;
    if(n<=k) f2 = 1;

    cout << ((f1+f2 == 2) ? "Yes" : "No") << endl;
    return 0;
}