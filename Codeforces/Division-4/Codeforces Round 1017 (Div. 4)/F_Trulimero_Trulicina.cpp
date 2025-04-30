#include<bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define dbg(...)
#endif
 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  auto __solve_testcase = [&](int test) {
    int n, m, k;  cin >> n >> m >> k;
    int s = 0;
    for(int i = 0 ; i < n ; ++i) {
      if(m % k == 0) {
        s = i;
      }
      for(int j = 0 ; j < m ; ++j) {
        cout << (s % k) + 1 << " \n"[j == m - 1];
        ++s;
      }
    }
  };
  
  int NumTest = 1;
  cin >> NumTest;
  for(int testno = 1; testno <= NumTest ; ++testno) {
    __solve_testcase(testno);
  }
  
  return 0;
}
