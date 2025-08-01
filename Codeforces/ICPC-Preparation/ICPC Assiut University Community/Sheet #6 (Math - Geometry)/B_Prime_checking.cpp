#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool isPrime(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    ll lim = sqrt(n);
    for (ll i = 3; i <= lim; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n; cin >> n;
    cout << (isPrime(n) ? "YES" : "NO") << endl;
    return 0;
}