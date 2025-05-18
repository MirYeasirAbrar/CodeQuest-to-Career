#include <bits/stdc++.h>
using namespace std;

double find_sum(const vector<double>& a, int n) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

void solve() {
    int n; cin >> n;
    vector<double> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    double avg = find_sum(a, n);

    cout << setprecision(8) << avg << '\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
    return 0;
}