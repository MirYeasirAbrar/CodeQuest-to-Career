#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin >> n;

    if(n<2){
        cout << -1 << endl;
    }
    for (int i=1; i<=n; i++){
        if(i%2 == 0){
            cout << i << endl;
        }
    }
    return 0;
}