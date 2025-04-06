#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--) {
        string str;
        cin >> str;
        
        int n = str.length();
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (str[i] == str[i + 1]) {
                count = 1;
                break;
            }
        }
        if(count == 1){
            cout << 1 << endl;
        }
        else{
            cout << n << endl;
        }
    }
    return 0;
}
