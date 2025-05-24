#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    long long n, x; cin >> n >> x;

    long long odd_count = (n + 1) / 2;
    if (x <= odd_count) {
        cout << 2 * x - 1 << '\n';
    } 
    else {
        cout << 2 * (x - odd_count) << '\n';
    }
    return 0;
}