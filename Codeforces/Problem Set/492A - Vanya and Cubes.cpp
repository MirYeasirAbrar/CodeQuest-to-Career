#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    int c(0), h(0);

    while(n > c + h){
        h++;
        c += h;
        n -= c;
    }
    cout << h << endl;
    return 0;
}