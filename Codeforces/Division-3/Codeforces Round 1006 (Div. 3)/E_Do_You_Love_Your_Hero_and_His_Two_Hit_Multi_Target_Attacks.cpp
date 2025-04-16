#include <bits/stdc++.h>

using namespace std;

vector<pair<int64_t, int64_t>> rec(int64_t k, int64_t x0 = 0, int64_t y0 = 0) {
  if (!k) {
    return {};
  }
  int64_t delta = 0;
  while (delta * (delta - 1) / 2 <= k) {
    delta++;
  }
  delta--;
  auto remaining = rec(k - delta * (delta - 1) / 2, x0 + delta + 1, y0 + 1);
  vector<pair<int64_t, int64_t>> ans;
  for (int x = x0; x < x0 + delta; ++x) {
    ans.push_back({x, y0});
  }
  ans.insert(ans.end(), remaining.begin(), remaining.end());
  return ans;
}

void solve() {
  int64_t k;
  cin >> k;
  if (!k) {
    cout << "1\n69 52\n";
    return;
  }
  auto ans = rec(k, 0, 0);
  cout << ans.size() << '\n';
  for (auto [x, y] : ans) {
    cout << x << ' ' << y << '\n';
  }
}

int main() {
  int tt = 1;
  cin >> tt;
  while (tt --> 0) {
    solve();
  }
  return 0;
}