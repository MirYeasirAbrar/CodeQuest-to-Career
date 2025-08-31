#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[a[i] - 1];
        for (int i = 0; i < n; i++)
            cout << i + 1 << " ";
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }    
    return 0;
}