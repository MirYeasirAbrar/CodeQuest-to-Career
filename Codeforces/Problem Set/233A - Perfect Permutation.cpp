#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    if (n % 2 != 0) {
        cout << -1 << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            if (i % 2 != 0) {
                std::cout << i + 1 << " ";
            } else {
                cout << i - 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}