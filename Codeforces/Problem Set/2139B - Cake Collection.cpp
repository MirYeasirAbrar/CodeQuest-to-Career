#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<ll>temp(n);
        for(int i=0;i<n;i++) cin >> temp[i];
        ll ans = 0;
        sort(temp.begin(),temp.end(),greater<ll>());
        for(int i=0;i<m&&i<n;i++) ans += (m-i)*temp[i];
        cout << ans << endl;
    }
    return 0;
}