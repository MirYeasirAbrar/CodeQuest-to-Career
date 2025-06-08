#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b; cin >> a >> b;
    int n1, n2, gcd, lcm, rem;
    n1 = a; 
    n2 = b;

    while(n2!=0){
        rem = n1 % n2;
        n1 = n2; 
        n2 = rem;
    }
    gcd = n1;
    lcm = (a*b)/gcd;
    cout << gcd << " " << lcm << endl;
    return 0;
}