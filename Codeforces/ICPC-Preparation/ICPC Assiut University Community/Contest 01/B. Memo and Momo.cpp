#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, k; cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0){
        cout << "BOTH" << endl;
    }
    else if (a % k != 0 && b % k != 0){
        cout << "NO ONE" << endl;
    }
    else if (a % k == 0 && b % k != 0){
        cout << "MEMO" << endl;
    }
    else if (a % k != 0 && b % k == 0){
        cout << "MOMO" << endl;
    }
    return 0;
}