#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    int cnt = 0;
    while(t--){
    int a, b; cin >> a >> b;
    if(b-a >= 2) cnt++;
    }

    cout << cnt << endl;

    return 0;
}