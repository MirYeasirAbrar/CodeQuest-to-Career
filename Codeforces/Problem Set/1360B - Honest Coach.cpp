#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    vector<int> v;
    int dif = 0;
    for (int i = 1; i < n; i++)
    {
        dif = a[i] - a[i - 1];
        v.push_back(dif);
    }

    sort(v.begin(), v.end());
    cout << v[0] << endl;
    
    }

    return 0;
}