#include <bits/stdc++.h>
using namespace std;

void isPrint(int n){
    if(n == 0){
        return;
    }

    cout << n;
    if (n != 1) {
            cout << " ";
        }
    isPrint(n-1);
    
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    isPrint(n);

    return 0;
}