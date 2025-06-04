#include <bits/stdc++.h>
using namespace std;

bool subseq(const vector<int>& a1, const vector<int>& a2, int n, int m){
    if(m > n) return false;
    int i =0, j=0;
    while(i<n && j<m){
        if(a1[i] == a2[j]){
            j++;
        }
        i++; 
    }
    return j == m;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m; cin >> n >> m;

    vector<int> a1(n);
    vector<int> a2(m);
    for(auto &a : a1) cin >> a;
    for(auto &x : a2) cin >> x;

    subseq(a1, a2, n, m) ? cout << "YES" << '\n' : cout << "NO" << '\n';

    return 0;
}