#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    int pd_sum = 0;
    int sd_sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) pd_sum = pd_sum + a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j)==(n-1)) sd_sum = sd_sum + a[i][j];
        }
    }
    cout << abs(pd_sum - sd_sum) << endl;
    return 0;
}