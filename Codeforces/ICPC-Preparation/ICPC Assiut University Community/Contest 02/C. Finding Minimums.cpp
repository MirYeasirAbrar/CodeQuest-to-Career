#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i+=k){
        int end = min(i+k, n);
    
        long long group_min = *min_element(a.begin() + i, a.begin() + end);
        
        if(i > 0) cout << " ";
        cout << group_min;
    }
    cout << endl;
    return 0;    
}