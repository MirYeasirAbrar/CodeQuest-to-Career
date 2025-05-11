// #include <stdio.h>

// void isPrint(int n, int i){
//     if(i==n+1){
//         return;
//     }
//     printf("%d\n",i);
//     isPrint(n,i+1);
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     isPrint(n,1);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void isPrint(int n, int i){
    if(i == n+1){
        return;
    }
    cout << i << '\n';
    isPrint(n,i+1);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    isPrint(n,1);

    return 0;
}