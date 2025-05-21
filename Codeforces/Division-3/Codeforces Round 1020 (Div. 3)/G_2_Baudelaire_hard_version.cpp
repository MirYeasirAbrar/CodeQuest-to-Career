#include <bits/stdc++.h>
using namespace std;
#define int long long
 
vector<vector<int>> tree, cd;
vector<int> sub, val;
vector<bool> del;
int n, cdRoot = -1;
 
int ask(vector<int> a) {
    int k = a.size();
    cout << "? 1 " << k << " ";
    for (auto x: a) {
        cout << x << " ";
    }
    cout << endl;
    int ans; cin >> ans;
    return ans;
}
 
void toggle(int u) {
    cout << "? 2 " << u << endl;
}
 
void answer(vector<int> ans) {
    cout << "! ";
    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << endl;
}
 
void calc_sums(int node, int par = 0) {
    sub[node] = 0;
    if (del[node]) return;
    for (auto next: tree[node]) {
        if (next == par) continue;
        calc_sums(next, node);
        sub[node] += sub[next];
    }
    sub[node]++;
}
 
int find_centroid(int node, int sz, int par = 0) {
    for (auto next: tree[node]) {
        if (next == par || del[next]) continue;
        if (sub[next] * 2 >= sz) return find_centroid(next, sz, node);
    }
    return node;
}
 
void build(int node, int prev) {
    cd[prev].push_back(node);
    del[node] = true;
    for (auto next: tree[node]) {
        if (del[next]) continue;
        calc_sums(next, node);
        int cent = find_centroid(next, sub[next], node);
        build(cent, node);
    }
}
 
bool inspect(vector<int> a, int tog) {
    int b4 = ask(a);
    toggle(tog);
    int aft = ask(a);
    int k = a.size();
    int must = b4;
    if (aft < b4) {
        must -= 2 * k;
    }
    else must += 2 * k;
    if (aft != must) return true;
    else return false;
}
 
int find_sus(vector<int> a, int tog) {
    int k = a.size();
    int lo = 0, hi = k-1;
    int ans = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        vector<int> qr;
        for (int j = 0; j <= mid; j++) {
            qr.push_back(a[j]);
        }
        if (inspect(qr, tog)) {
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }
    return ans; 
}
 
int find_root(int node, int par = 0) {
    if (cd[node].empty()) return node;
    vector<int> ch;
    for (auto next: cd[node]) {
        if (next == par) continue;
        ch.push_back(next);
    }
    int sus = find_sus(ch, node);
    if (sus == -1) return node;
    return find_root(ch[sus], node);
}
 
void find_vals(int node, int par = 0, int above = 0) {
    val[node] -= above;
    above += val[node];
    for (auto next: tree[node]) {
        if (next != par) {
            find_vals(next, node, above);
        }
    }
}
 
void solve() {
    cin >> n;
    cd.assign(n+1, {});
    tree.assign(n+1, {});
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }    
    del.assign(n+1, false);
    sub.assign(n+1, 0);
    calc_sums(1);
    cdRoot = find_centroid(1, n);
    build(cdRoot, 0);
    int root = find_root(cdRoot);
    val.resize(n+1);
    for (int i = 1; i <= n; i++) {
        val[i] = ask({i});
    }
    find_vals(root);
    answer(val);
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}