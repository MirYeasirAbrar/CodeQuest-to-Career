#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin >> n;
    int temp, rem;

    temp = n;
    
    while(temp!=0){
        rem = temp % 10;
        temp = temp /10; 
    }

    if(rem % 2 == 0){
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
    return 0;
}