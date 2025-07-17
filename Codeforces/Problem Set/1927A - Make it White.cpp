#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    ll n; cin >> n;

    string s; cin >> s;

    ll first = 0, last = 0;

    for (int i = 0; i < n; i++){
        if (s[i] == 'B'){
            first = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--){
        if (s[i] == 'B'){
            last = i;
            break;
        }
    }

    cout << last - first + 1 << endl;
    
    }

    return 0;
}