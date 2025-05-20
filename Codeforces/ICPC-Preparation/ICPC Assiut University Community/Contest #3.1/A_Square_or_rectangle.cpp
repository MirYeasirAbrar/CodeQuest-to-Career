#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int w, h; cin >> w >> h;

        if(w == h){
            cout << "Square" << '\n';
        }
        else{
            cout << "Rectangle" << '\n';
        }    
   }
    return 0;
}