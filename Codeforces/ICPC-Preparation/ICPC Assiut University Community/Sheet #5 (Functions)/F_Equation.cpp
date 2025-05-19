#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, n; cin >> x >> n;

    long long sum = 0;
    for(int i = 0; i <= n; i += 2){
        sum += (long long)pow(x, i);
    }
    sum -= 1;

    cout << sum << '\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
    return 0;
}