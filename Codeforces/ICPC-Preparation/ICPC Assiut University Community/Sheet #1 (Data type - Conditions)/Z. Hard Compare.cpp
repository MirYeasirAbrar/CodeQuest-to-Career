// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     unsigned long long A, B, C, D;
//     cin >> A >> B >> C >> D;

//     if(pow(A,B)>pow(C,D)){
//         cout << "YES" << endl; 12^12 mamory overflow
//     }
//     else{
//         cout << "NO" << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long A, B, C, D;
    cin >> A >> B >> C >> D;

    double logAB = B * log(A);
    double logCD = D * log(C);

    if (logAB > logCD) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
