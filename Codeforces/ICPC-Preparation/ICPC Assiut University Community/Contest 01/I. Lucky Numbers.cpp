#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int Tnh = n/10, Oth = n%10;
    if(Oth == 0){
        cout << "YES" << endl;
    }
    else{
        if(Tnh % Oth == 0){
            cout << "YES" << endl;
        }
        else if(Oth % Tnh == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}