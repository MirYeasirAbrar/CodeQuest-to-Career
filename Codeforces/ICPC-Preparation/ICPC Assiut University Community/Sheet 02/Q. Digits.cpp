#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n==0){
            cout << n << endl;
        }
        else{
            int temp, rem;
        temp = n;
        while(temp!=0){
            rem = temp % 10;
            cout << rem << " ";
            temp = temp / 10;
        }
        cout << endl;
        }
    }
    return 0;
}