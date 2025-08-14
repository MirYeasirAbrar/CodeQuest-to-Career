#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int z = 0;
        for (int i = 0; i < n; ++i)
            if (s[i] == '0')
                z++;
        int p = z / 2, q = (n - z) / 2;
        cout << (k >= abs(p - q) && (p + q - k) % 2 == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}