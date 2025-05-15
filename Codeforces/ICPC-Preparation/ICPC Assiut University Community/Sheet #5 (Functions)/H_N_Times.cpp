#include <bits/stdc++.h>
using namespace std;

void n_times(){
    int n; cin >> n;
    string s; cin >> s;
    for(int i=0; i<n; i++){
        cout << s << " ";
    }
    cout << '\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        n_times();    
   }


    return 0;
}