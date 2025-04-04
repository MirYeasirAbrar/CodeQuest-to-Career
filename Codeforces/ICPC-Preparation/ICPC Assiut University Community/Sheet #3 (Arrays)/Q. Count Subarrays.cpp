#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector <int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int count =0;
        int len = 1;
        for(int i=1; i<n; i++){
            if(a[i] >= a[i-1]){
                len++;
            }
            else{
                count += 1LL * len * (len+1) / 2;
                len = 1;
            }
        }
        count += 1LL * len * (len+1) / 2;
        cout << count << endl;
    }
    return 0;
}