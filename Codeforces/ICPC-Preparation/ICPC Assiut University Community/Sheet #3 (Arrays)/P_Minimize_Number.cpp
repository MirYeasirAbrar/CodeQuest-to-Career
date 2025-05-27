#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    int ans = INT_MAX;
    for(int x : a) {
        int cnt = 0;
        while(x % 2 == 0) {
            x /= 2;
            cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << '\n';
    return 0;
}