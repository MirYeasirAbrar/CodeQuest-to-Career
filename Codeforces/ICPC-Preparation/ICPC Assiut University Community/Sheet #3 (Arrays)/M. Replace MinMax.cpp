#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int min = a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    int max = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==min){
            a[i] = max;
        }
        else if(a[i] == max){
            a[i] = min;
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}