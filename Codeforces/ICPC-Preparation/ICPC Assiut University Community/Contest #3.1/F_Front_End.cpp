
#include <bits/stdc++.h>
using namespace std;


void r_sum(long long a[], int n, int i, long long s){
    
    if(i==n){
        cout << s; 
        return;
    }
    s += a[i];
    r_sum(a,n,i+1,s);
    
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;

    long long a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    int i = 0;
    long long sum = 0;
    r_sum(a, n, i, sum);


    return 0;
}