#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < 5; ++i) {
      if (a <= b && a <= c) {
        a++;
      } else if (b <= a && b <= c) {
        b++;
      } else {
        c++;
      }
    }
    cout << (long long)a * b * c << endl;
    
    }

    return 0;
}