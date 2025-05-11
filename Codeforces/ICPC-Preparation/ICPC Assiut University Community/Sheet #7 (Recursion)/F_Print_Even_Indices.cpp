// #include <stdio.h>

// void arrayEven(int a[], int n, int i){
//     if(i==n){
//         return;
//     }
//     arrayEven(a,n,i+1);

//     if(i%2 == 0){
//         printf("%d ", a[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }

//     arrayEven(a,n,0);

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void arrayEven(int a[], int n, int i){
    if(i==n){
        return;
    }
    arrayEven(a,n,i+1);

    if(i%2 == 0) cout << a[i] << " " ;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    arrayEven(a,n,0);

    return 0;
}