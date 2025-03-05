#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        long long int fact;
        for(int i=n; i>0; i--){
            fact = fact*i;
        }
        cout << fact << endl;

    }
    return 0;
}