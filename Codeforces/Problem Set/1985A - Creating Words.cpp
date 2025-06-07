#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        string a, b; cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    
    }

    return 0;
}