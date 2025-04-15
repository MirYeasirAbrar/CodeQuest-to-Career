#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int best_diff = 0, L = 0, R = 0;
  for (int i = 0; i < n; ++i) {
    int cnt_greater = 0, cnt_less = 0;
    for (int j = i + 1; j < n; ++j) {
      cnt_greater += a[j] > a[i];
      cnt_less += a[j] < a[i];

      if (best_diff > cnt_greater - cnt_less) {
        best_diff = cnt_greater - cnt_less;
        L = i, R = j;
      }
    }
  }

  cout << L + 1 << ' ' << R + 1 << '\n';
}

int main() {
  int tt = 1;
  cin >> tt;
  while (tt --> 0) {
    solve();
  }
  return 0;
}