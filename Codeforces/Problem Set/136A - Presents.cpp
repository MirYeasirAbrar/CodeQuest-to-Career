#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n; 
    vector<int> a(n);
    vector<int> r(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
        r[a[i]-1] = i+1;
    }

    for(int i=0; i<n; i++) cout << r[i] << " ";
    return 0;
}