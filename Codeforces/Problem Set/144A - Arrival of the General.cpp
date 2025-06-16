#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    int mx = 0, mn = 101, idxmx, idxmn;

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > mx){
            mx = a[i]; 
            idxmx = i;
        }
        if(a[i] <= mn){ 
            mn = a[i]; 
            idxmn = i;
        }
    }

    cout << ((idxmx > idxmn) ? (idxmx + a.size() - idxmn - 2) : (idxmx + a.size() - idxmn - 1)) << endl;
    
    return 0;
}