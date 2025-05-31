#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n; 
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int mx = *max_element(a.begin(), a.end());
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += mx - a[i];
    }

    cout << sum << '\n';
    return 0; 
}