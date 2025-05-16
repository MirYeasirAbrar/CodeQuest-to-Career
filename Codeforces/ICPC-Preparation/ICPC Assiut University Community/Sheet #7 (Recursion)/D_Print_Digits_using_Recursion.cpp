#include <bits/stdc++.h>
using namespace std;

    void printDigit(int n){       
        if(n == 0){
            return;
        }
        printDigit(n/10);
        int rem = n % 10;
        cout << rem << " ";  
        
    }

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        if(n == 0){
            cout << 0 << endl;
        } else {
            printDigit(n);
            cout << '\n';    
        }
   }
    return 0;
}