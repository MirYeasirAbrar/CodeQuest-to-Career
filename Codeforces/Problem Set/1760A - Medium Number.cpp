#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int a[3];
    for(int i=0; i<3; i++) cin >> a[i];

    sort(a, a+3);
    cout << a[1] << '\n';    
   }


    return 0;
}