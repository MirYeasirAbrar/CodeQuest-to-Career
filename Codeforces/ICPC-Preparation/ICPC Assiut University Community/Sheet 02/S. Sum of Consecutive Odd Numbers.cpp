#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        int sum = 0;
        if(x<y){
            for (int i=x+1; i<y; i++){
                if(i%2!=0){
                    sum = sum + i;
                }
            }
        }
        else{
            for (int i=y+1; i<x; i++){
                if(i%2!=0){
                    sum = sum + i;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}