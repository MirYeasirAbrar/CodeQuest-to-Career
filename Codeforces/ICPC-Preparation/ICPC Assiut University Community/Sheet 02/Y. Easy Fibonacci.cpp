#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int f1 = 0, f2 = 1;
    int fibo;
    if(n==0){
        cout << 0;
    }
    if(n==1){
        cout << 0;
    }
    else if(n==2){
        cout << 0 << " " << 1;
    }
    else{
        cout << 0 << " " << 1 << " ";
        for (int i=0; i<n-2; i++){
            fibo = f1 + f2;
            f1 = f2;
            f2 = fibo;
            cout << fibo << " ";
        }
    }
}