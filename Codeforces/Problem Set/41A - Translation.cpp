#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string a, b; cin >> a >> b;   
    reverse(a.begin(), a.end());

    if(a == b){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
    return 0;
}