#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long int a[51];
        a[0] = 0;
        a[1] = 1;
        for(int i=2; i<51; i++){
            a[i] = a[i-2] + a[i-1];
        }
        cout << a[n-1] << endl;
    return 0;
}