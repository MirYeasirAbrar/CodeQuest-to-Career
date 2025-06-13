#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    long long n; cin >> n;
    long long tot = 0, ans = 0;

    while(n--){
        long long temp; cin >> temp;
        if(temp == -1){
            if(!tot) ans++;
            else tot--;
        }
        else tot += temp;
    }
    cout << ans << endl;
    return 0;
}