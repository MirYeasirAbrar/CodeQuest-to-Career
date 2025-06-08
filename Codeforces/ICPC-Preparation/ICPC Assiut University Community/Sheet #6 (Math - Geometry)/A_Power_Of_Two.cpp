#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    long long n; cin >> n;
    cout << ((n > 0 && (n & (n - 1)) == 0) ? "YES" : "NO") << endl;
    return 0;
}