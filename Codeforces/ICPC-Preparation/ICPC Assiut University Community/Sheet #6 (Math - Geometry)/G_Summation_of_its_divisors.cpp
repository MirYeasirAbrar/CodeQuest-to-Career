#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

ll sumOfDivisors(ll n) {
    ll sum = 0;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n; cin >> n;
    cout << sumOfDivisors(n) << endl;

    return 0;
}