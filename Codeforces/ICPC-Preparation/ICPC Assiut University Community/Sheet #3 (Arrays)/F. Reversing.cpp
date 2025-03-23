#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ra[n];
    for(int i=0; i<n; i++){
        ra[i] = a[n-i];
    }
    for(int i=0; i<n; i++){
        cout << ra[i] << " ";
    }
    return 0;
}