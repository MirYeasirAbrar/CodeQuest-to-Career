#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    sum = sum / 2;
    sort(a.begin(), a.end());
    int cnt = 0, sum2 = 0;
    for(int i=n-1; i>=0; i--){
        sum2 += a[i];
        cnt++;
        if(sum2 > sum){
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}