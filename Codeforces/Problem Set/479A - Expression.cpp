#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b, c; cin >> a >> b >> c;

    cout << max({(a+b+c), (a*b*c), (a*(b+c)), ((a+b)*c), (a+(b*c)), ((a*b)+c)}) << '\n';
    return 0;
}