#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    cout << ((n%3 == 0) ? "Second" : "First") << endl;
    }
    return 0;
}
