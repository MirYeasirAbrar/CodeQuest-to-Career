#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  string s;
  getline(cin, s);
  for(int i=0; i<s.size(); i++){
    if(s[i] != '\\'){
        cout << s[i];
    }
    else{
        break;
    }
  }
  return 0;
}