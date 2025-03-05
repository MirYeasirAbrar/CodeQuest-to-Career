#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, rem, gcd; cin >> n1 >> n2;
    while (n2!=0){
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;

    cout << gcd << endl;
    return 0;
}