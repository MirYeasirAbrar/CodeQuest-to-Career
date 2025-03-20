#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i] ;
    }
    long long min = a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    cout << min << " ";
    for(int i=0; i<n; i++){
        if(a[i]==min){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}