#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int rem, temp, sum = 0;

    temp = n;
    while(temp!=0){
        rem = temp%10;
        sum += rem;
        temp /= 10;
    }
    cout << sum << '\n';    
   }
    return 0;
}