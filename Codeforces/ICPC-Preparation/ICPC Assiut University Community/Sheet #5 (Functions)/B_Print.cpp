#include <bits/stdc++.h>
using namespace std;

void print_it(int n){
    for(int i=1; i<=n; i++){
        cout << i;
        if(i<n){
            cout << " ";
        }
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    print_it(n);

    return 0;
}