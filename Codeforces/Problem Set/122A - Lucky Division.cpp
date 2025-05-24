#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; 
    cin >> n;
    string s = to_string(n);

    for(char c : s){
        if(c != '4' && c != '7'){
            goto check_divisibility;
        }
    }
    cout << "YES\n";
    return 0;

check_divisibility:
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 ||
       n % 44 == 0 || n % 77 == 0 || n % 447 == 0 || n % 477 == 0 ||
       n % 774 == 0 || n % 744 == 0 || n % 444 == 0 || n % 777 == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
