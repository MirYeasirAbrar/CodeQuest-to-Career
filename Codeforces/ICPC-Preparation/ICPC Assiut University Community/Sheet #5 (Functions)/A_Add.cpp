#include <bits/stdc++.h>
using namespace std;

void add_it(int n, int m){
    cout << m + n << '\n';
} 

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m; cin >> n >> m;
    add_it(n, m);

    return 0;
}