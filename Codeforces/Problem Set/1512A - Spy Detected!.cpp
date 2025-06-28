#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t, n;
    cin >> t;
    for(int i = 0; i<t; i++)
    {
      cin >> n;
      vector<int> a(n);
      for(int &x : a) cin >> x;
      
      for(int j = 0; j<n; j++)
      {
        int tmp = 0;
        for(int k = 0; k<n; k++)
        {
          if(a[j] == a[k]) tmp++;
        }
        if(tmp == 1) cout << j+1 << endl;
      }
    }
    return 0;
}