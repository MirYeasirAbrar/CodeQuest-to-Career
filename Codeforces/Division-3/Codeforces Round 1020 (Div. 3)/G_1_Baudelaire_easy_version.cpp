#include <bits/stdc++.h>
using i64 = long long;
 
void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n+1), son(n-1);
    for (int i = 1; i < n; ++i) {
        int u, v;
        std::cin >> u >> v;
        son[i-1] = i + 1;
    }
    int Q = 0;
    auto ask = [&](int op, const std::vector<int> &v) {
        if (++Q > n + 200) {
            assert(false);
        }
        std::cout << "? " << op;
        if (op == 1) {
            std::cout << ' ' << v.size();
            for (auto u: v) std::cout << ' ' << u;
            std::cout << std::endl;
            int res = 0;
            std::cin >> res;
            return res;
        } else {
            std::cout << ' ' << v[0] << std::endl;
            return 0;
        }
    };
    int rt = 0;
    int bef = ask(1, son);
    ask(2, std::vector<int>{1});
    int af = ask(1, son);
    if (std::abs(bef - af) == 2 * son.size()) {
        rt = 1;
    } else {
        int l = 0, r = son.size() - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            std::vector<int> query(son.begin() + l, son.begin() + mid + 1);
            int bef = ask(1, query);
            ask(2, std::vector<int>{1});
            int af = ask(1, query);
            if (std::abs(bef - af) != 2 * (mid - l + 1)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        rt = son[l];
    }
    for (int i = 1; i <= n; ++i) {
        a[i] = ask(1, std::vector<int>{i});
    }
    for (int i = 2; i <= n; ++i) {
        if (rt != i) {
            a[i] -= a[1];
        }
    }
    if (rt > 1) a[1] -= a[rt];
    std::cout << '!';
    for (int i = 1; i <= n; ++i) {
        std::cout << ' ' << a[i];
    }
    std::cout << std::endl;
}
 
int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    std::cin >> T;
    while (T--) solve();
    return 0;
}