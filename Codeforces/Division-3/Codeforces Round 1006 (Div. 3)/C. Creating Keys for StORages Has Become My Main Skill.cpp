#include <iostream>
#include <vector>

using namespace std;

void Solve() {
  int len, val;
  cin >> len >> val;
  vector<int> ans(len, val);
  int or_val = 0;
  bool flag = true;
  for (int i = 0; i < len - 1; ++i) {
    if (((or_val | i) & val) == (or_val | i)) {
      or_val |= i;
      ans[i] = i;
    } else {
      flag = false;
      break;
    }
  }
  if (flag && (or_val | (len - 1)) == val) {
    ans[len - 1] = len - 1;
  }
  for (auto it : ans) cout << it << ' ';
  cout << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int test_count = 1;
  cin >> test_count;
  while (test_count --> 0) Solve();
}