#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using ii = pair <ll, ll>;
using vii = vector <ii>;

const ll MAXN = 2E5+16, MOD = 998244353;
ll pw2[MAXN];

struct SegTree {
    vll tree;
    ll n;

    SegTree (ll n): tree(2*n, 0), n(n) {}

    void update (ll id, ll val) {
        for (tree[id += n] = val; id > 1; id >>= 1)
            tree[id>>1] = (tree[id] + tree[id^1]) % MOD;
    }

    ll query (ll ql, ll qr) {
        ll ans = 0;
        for (ql += n, qr += n+1; ql < qr; ql >>= 1, qr >>= 1) {
            if (ql&1) (ans += tree[ql++]) %= MOD;
            if (qr&1) (ans += tree[--qr]) %= MOD;
        }
        return ans;
    }
};

void tc () {
    string str;
    cin >> str;
    ll n = str.size();
    SegTree stFreq0(n), stFreq1(n), st0(n), st1(n);
    for (ll i = 0; i < n; i++) {
        (str[i] == '0' ? stFreq0 : stFreq1).update(i, pw2[n-1-i]);
        (str[i] == '0' ? st0 : st1).update(i, pw2[i]);
    }
    ll ans = pw2[n]-1;
    {ll acc0 = 0, acc1 = 0;
    for (ll i = 0; i < n; i++) {
        (ans += (str[i] == '0' ? acc1 : acc0)*pw2[n-1-i]) %= MOD;
        ((str[i] == '0' ? acc0 : acc1) += pw2[i]) %= MOD;
    }}
    ll Q;
    cin >> Q;
    while (Q--) {
        ll at;
        cin >> at;
        at--;
        (ans -= (str[at] == '0' ? st1 : st0).query(0, at-1)*pw2[n-1-at]) %= MOD;
        (ans -= (str[at] == '0' ? stFreq1 : stFreq0).query(at+1, n-1)*pw2[at]) %= MOD;
        (ans += MOD) %= MOD;
        (str[at] == '0' ? stFreq0 : stFreq1).update(at, 0);
        (str[at] == '0' ? st0 : st1).update(at, 0);
        str[at] = (str[at] == '0' ? '1' : '0');
        (str[at] == '0' ? stFreq0 : stFreq1).update(at, pw2[n-1-at]);
        (str[at] == '0' ? st0 : st1).update(at, pw2[at]);
        (ans += (str[at] == '0' ? st1 : st0).query(0, at-1)*pw2[n-1-at]) %= MOD;
        (ans += (str[at] == '0' ? stFreq1 : stFreq0).query(at+1, n-1)*pw2[at]) %= MOD;
        cout << ans << ' ';
    }
    cout << '\n';
}

int main () {
    cin.tie(nullptr) -> sync_with_stdio(false);
    pw2[0] = 1;
    for (ll i = 1; i < MAXN; i++) pw2[i] = pw2[i-1]*2 % MOD;
    ll T; cin >> T; while (T--) { tc(); }
    return 0;
}