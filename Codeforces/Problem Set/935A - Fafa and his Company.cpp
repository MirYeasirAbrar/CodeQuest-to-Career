#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n / 2; ++i) {
        if ((n - i) % i == 0) {
        count++;
        }
    }
    cout << count << endl;
    return 0;
}