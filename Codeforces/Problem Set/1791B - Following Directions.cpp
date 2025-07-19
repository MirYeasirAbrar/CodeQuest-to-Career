#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
     int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    bool found = false;
    for (char c : s) {
      if (c == 'U') {
        y++;
      } else if (c == 'D') {
        y--;
      } else if (c == 'R') {
        x++;
      } else {
        x--;
      }
      if (x == 1 && y == 1) {
        found = true;
        break;
      }
    }
    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    
    }

    return 0;
}