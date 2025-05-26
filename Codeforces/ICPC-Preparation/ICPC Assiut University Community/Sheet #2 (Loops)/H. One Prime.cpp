#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;

    if(x == 1){
        cout << "NO" << endl;
    }
    else if(x == 2){
        cout << "YES" << endl;
    }
    else{
        int count = 0;
        for( int i=1; i<=(x/2); i++){
            if(x%i == 0){
                count = 1;
                break;
            }            
        }

        if(count == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}