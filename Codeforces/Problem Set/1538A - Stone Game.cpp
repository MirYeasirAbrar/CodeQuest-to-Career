#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n;
        cin >> n;
        int a[n],j,k;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==1){
                j=i;
            }
            if(a[i]==n){
                k=i;
            }
        }
        cout << min(min(j+1+n-k,k+1+n-j),min(max(j+1,k+1),max(n-j,n-k))) << endl;
    
    }

    return 0;
}