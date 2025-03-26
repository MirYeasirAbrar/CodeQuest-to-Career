#include <bits/stdc++.h>
using namespace std; 
int main(){
    long long n, k, a;
    cin >> n >> k >> a;
    long long x = n * k;
    if(x % a != 0){
        cout << "double" << endl;
    }
    else{
        long long s = x / a;
        if(s >= -2147483647LL && s <= 2147483647LL){
            cout << "int" << endl;
        }
        else{
            cout << "long long" << endl;
        }
    }    
    return 0;
}