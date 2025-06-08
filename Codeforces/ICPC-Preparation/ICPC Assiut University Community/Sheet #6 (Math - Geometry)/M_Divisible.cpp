#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string n;
    long long x;
    cin >> n >> x;

    long long rem = 0;
    for (char c : n) {
        rem = (rem * 10 + (c - '0')) % x;
    }

    cout << (rem == 0 ? "YES" : "NO") << endl;
    return 0;
}