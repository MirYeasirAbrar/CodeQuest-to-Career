#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n; 
    vector<int> a(n), b(n);

    for(int i=0; i<n; i++) cin >> a[i] >> b[i];
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i] == b[j]){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}