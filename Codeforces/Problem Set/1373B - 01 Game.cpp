#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    string s;
    cin >> s;

    int count0 = 0;
    int count1 = 0;

    for (char c : s) {
        if (c == '0') {
            count0++;
        } else {
            count1++;
        }
    }

    int moves = min(count0, count1);

    if (moves % 2 == 1) {
        cout << "DA\n"; 
    } else {
        cout << "NET\n"; 
    }
    
    }

    return 0;
}