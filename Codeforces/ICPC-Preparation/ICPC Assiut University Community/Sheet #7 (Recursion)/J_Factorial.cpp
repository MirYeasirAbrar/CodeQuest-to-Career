#include <bits/stdc++.h>
using namespace std;
void factorial(int n, long long f, int i){
    if(i > n){
        cout << f <<'\n';
        return;
    }

    f *= i;
    factorial(n, f, i+1);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;

    long long f = 1;
    int i = 1;
    factorial(n, f, i);

    return 0;
}

// #include <stdio.h>

// void factorial(int n, long long f, int i){
//     if(i > n){
//         printf("%lld", f);
//         return;
//     }

//     f *= i;
//     factorial(n, f, i+1);
// }

// int main(){
//     int n; 
//     scanf("%d", &n);

//     long long f = 1;
//     int i = 1;
//     factorial(n, f, i);

//     return 0;

// }