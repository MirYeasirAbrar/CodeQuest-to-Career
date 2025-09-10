#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n;
        cin >> n;

        int a = 0, b = 0;
        for (int i = 1; i <= n; i++){
            int s;
            cin >> s;
            if (s == 0)
                a++;
            else if (s > 1)
                b++;
        }
        if (a <= (n + 1) / 2)
            cout << "0" << endl;
        else if (b > 0 || a == n)
            cout << "1" << endl;
        else
            cout << "2" << endl;

    }    
    return 0;
}