#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    if(abs(a-1) < abs(c-b)+abs(c-1)){
      cout << 1 << endl;
    } else if(abs(a-1) > abs(c-b)+abs(c-1)){
      cout << 2 << endl;
    } else {
      cout << 3 << endl;
    }
    
    }

    return 0;
}