#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  string s, v;
  cin >> s >> v;

  cout << s.size() << " " << v.size() << '\n';
  cout << s+v << '\n';
  char t = s[0];
  s[0] = v[0];
  v[0] = t;
  
  cout << s << " " << v << '\n';
  return 0;
}