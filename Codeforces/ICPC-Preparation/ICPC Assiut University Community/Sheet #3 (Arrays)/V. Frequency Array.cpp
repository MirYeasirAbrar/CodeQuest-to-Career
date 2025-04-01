// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, m; cin >> n >> m;
//     int a[n], b[m];
//     for(int i=0; i<n; i++){
//         cin >> a[i];
//     }    
//     vector <int> count(m,0);
//     int x = 1;
//     for(int x=1; x<=m; x++){
//         for(int i=0; i<n; i++){
//             if(a[i] == x){
//                 count[x-1]++;
//             }
//         }
//     }
    
//     for(int i=0; i<m; i++){
//         cout << count[i] << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> count(m, 0);
    for(int i = 0; i < n; i++) {
        if(a[i] >= 1 && a[i] <= m) { 
            count[a[i]-1]++;
        }
    }
    
    for(int i = 0; i < m; i++) {
        cout << count[i] << endl;
    }
    
    return 0;
}