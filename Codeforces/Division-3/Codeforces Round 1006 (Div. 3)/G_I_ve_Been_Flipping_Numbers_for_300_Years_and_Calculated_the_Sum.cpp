#include <bits/stdc++.h>

using namespace std;

constexpr int64_t mod = 1e9 + 7;
constexpr int64_t twoInv = 500'000'004;
constexpr int64_t sixInv = 166'666'668;

int64_t add(int64_t a, int64_t b) {
  return (a % mod + b % mod) % mod;
}

int64_t mns(int64_t a, int64_t b) {
  return (a % mod - b % mod + mod) % mod;
}

int64_t mul(int64_t a, int64_t b) {
  return (a % mod) * (b % mod) % mod;
}

int64_t rev(int64_t n, int64_t p) {
  int64_t res = 0;
  while (n) {
    res = add(mul(res, p), n % p);
    n /= p;
  }
  return res;
}

int64_t stupid(int64_t n, int64_t k) {
  int64_t res = 0;
  for (int64_t p = 2; p <= k; ++p) {
    res = add(res, rev(n, p));
  }
  return res;
}

int64_t sum1(int64_t r) {
  return mul(mul(r, r + 1), twoInv);
}

int64_t sum1(int64_t l, int64_t r) {
  return mns(sum1(r), sum1(l - 1));
}

int64_t sum2(int64_t r) {
  return mul(mul(mul(r, r + 1), 2 * r + 1), sixInv);
}

int64_t sum2(int64_t l, int64_t r) {
  return mns(sum2(r), sum2(l - 1));
}

int64_t get(int64_t n, int64_t l, int64_t r) {
  if (l > r) {
    return 0;
  }

  int64_t res = mul(sum1(l, r), n);
  int64_t minus = 0, plus = 0;

  int64_t L = l;
  while (L <= r) {
    int64_t value = n / L;
    int64_t R = min(r, n / value);

    minus = add(minus, mul(sum2(L, R), value));
    plus = add(plus, mul(R - L + 1, value));

    L = R + 1;
  }

  return add(mns(res, minus), plus);
}

void solve() {
  int64_t n, k;
  cin >> n >> k;

  int64_t sq = (int64_t)sqrtl((long double)n);
  int64_t ans = mul(max<int64_t>(0, k - n), n);
  ans = add(ans, stupid(n, min(sq, k)));
  ans = add(ans, get(n, sq + 1, min(n, k)));

  cout << ans << '\n';
}

int main() {
  int tt = 1;
  cin >> tt;
  while (tt --> 0) {
    solve();
  }
  return 0;
}