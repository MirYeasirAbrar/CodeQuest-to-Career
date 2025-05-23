#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, h; cin >> n >> h;

    vector <int> a(n);
    for(int &x : a){
        cin >> x;
    }

    int usl = 0, bnd = 0;
    for(int i=0; i<n; i++){
        if(a[i] <= h){
            usl++;
        }
        else{
            bnd += 2;
        }
    }

    cout << usl+bnd << '\n';
    return 0;
}