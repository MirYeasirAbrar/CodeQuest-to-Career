#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while (tt--){
        string str;
        cin >> str;

        int n = str.length();
        for(int i=0; i<n-2; i++){
            cout << str[i];
        }
        cout << "i" << endl;
    }

    return 0;
}