#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, z; cin >> n >> z;
    vector <int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    while(z--){
        int t; cin >> t;
        int beg = 0, end = n-1;
        bool f = false;
        while(beg <= end){
            int mid = beg + (end - beg) / 2;

            if(a[mid] == t){
                f = true;
                break;
            }
            else if(a[mid] > t) {
                end = mid - 1;
            }
            else{
                beg = mid + 1;
            }
        }
        cout << (f ? "found" : "not found") << endl;
    }
    return 0;
}