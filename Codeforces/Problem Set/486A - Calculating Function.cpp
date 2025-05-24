#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    long long n;  cin >> n;
    long long sum = floor((n+1)/2) * pow(-1, n);

    cout << sum << '\n';

    return 0;
}