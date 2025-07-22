#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int min_a = 1e9, min_b = 1e9;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      min_a = min(min_a, a[i]);
    }
    for (int i = 0; i < n; ++i) {
      cin >> b[i];
      min_b = min(min_b, b[i]);
    }
    long long moves = 0;
    for (int i = 0; i < n; ++i) {
      moves += max(a[i] - min_a, b[i] - min_b);
    }
    cout << moves << endl;
    
    }

    return 0;
}