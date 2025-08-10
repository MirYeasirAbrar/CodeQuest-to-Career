#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int a, b, c; cin >> a >> b >> c;
    cout << ((a+b+c)%3 == 0 && b <= (a+b+c)/3 ? "YES" : "NO") << endl;
    }

    return 0;
}