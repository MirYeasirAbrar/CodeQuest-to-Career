#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t; cin >> t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+1],b[n+1];
        a[0]=b[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=b[i-1]+a[i];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            cout<<((b[n]-b[r]+b[l-1]+(r-l+1)*k)&1?"YES\n":"NO\n");
        }
    }    
    return 0;
}