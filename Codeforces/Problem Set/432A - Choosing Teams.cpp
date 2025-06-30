#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int teams = 0, count = 0;
    for(int i=0; i<n; i++){
        if(a[i]+k <= 5) count++;

        if(count == 3){
            teams++;
            count = 0;
        }
    }

    cout << teams << endl;
    return 0;
}