#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int l = 0, r = n - 1;
        while (l < r)
        {
            cout << b[l] << " ";
            l++;
            cout << b[r] << " ";
            r--;
        }
        if (n % 2)
            cout << b[r];
        cout << endl;
    
    }

    return 0;
}