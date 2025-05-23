#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;

    vector<int> a(n);
    for(int &x : a){
        cin >> x;
    }

    for(int i=0; i<n; i++){
        if(a[i] == 1){
            cout << "HARD" <<'\n';
            return 0;
        }
    }

    cout << "EASY" << '\n';
    return 0;
}